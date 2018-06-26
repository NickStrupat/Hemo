#include <atomic>
#include <iostream>
#include <typeindex>
#include <functional>
#include <bitset>

class Type;

class Type
{
	uint16_t flags;
public:
	uint16_t typeIndex() const { return 0; /* this - &types[0] */ }
	bool isStruct()    const { return flags & (1 << 0); }
	bool isInterface() const { return flags & (1 << 1); }
	bool isClass()     const { return flags & (1 << 2); }
	bool isEnum()      const { return flags & (1 << 3); }
	bool isAbstract()  const { return flags & (1 << 4); }
};

class TypeInfo
{

};

union HierarchyTerminalDistances
{
	HierarchyTerminalDistances(uint8_t up, uint8_t down) : up(up), down(down) {}

	uint8_t const up;
	uint8_t const down;
};

class TypeInfoRef
{
	uint64_t data;
public:
	TypeInfoRef() = default;
	TypeInfoRef(char const * typeName) : data(reinterpret_cast<uint64_t>(typeName)) {}

	HierarchyTerminalDistances hierarchyTerminalDistances() const
	{
		return *(reinterpret_cast<HierarchyTerminalDistances const *>(&data) + 3);
	}
	char const * typeName() const { return reinterpret_cast<char const *>(data & 0x0000ffffffffffffUL); }
};

static uint16_t typeCount = 0;
static TypeInfoRef types[std::numeric_limits<uint16_t>::max()];

template <typename T, unsigned B>
inline T signextend(const T x)
{
	struct { T x : B; } s;
	return s.x = x;
}

template<typename T>
class Ref
{
	class TypeRegistration
	{
	public:
		uint16_t const typeIndex;
		TypeRegistration() : typeIndex(typeCount++) { types[typeIndex] = typeid(T).name(); }
	};

	uint64_t const data;
public:
	static TypeRegistration const typeRegistration;
	Ref(T * const pointer) : data(reinterpret_cast<uint64_t>(pointer) | static_cast<uint64_t>(typeRegistration.typeIndex) << 48) {}

	T * pointer() const { return reinterpret_cast<T *>(data & 0x0000ffffffffffffUL); }
	uint16_t typeIndex() const { return static_cast<uint16_t>((data & 0xffff000000000000UL) >> 48); }

	template<typename U>
	Ref<U> Cast() const;
};

template <typename T>
template <typename U>
Ref<U> Ref<T>::Cast() const
{
	return *reinterpret_cast<Ref<U> const *>(this);
}

//template <typename T>
//template <>
//Ref<void> Ref<T>::Cast() const
//{
//	return *reinterpret_cast<Ref<U> const *>(this);
//}

template <>
template <typename U>
Ref<U> Ref<void>::Cast() const
{
	auto a = this->typeIndex();
	auto b = Ref<U>::typeRegistration.typeIndex;
	auto x = types[a].typeName();
	auto y = types[b].typeName();
	if (this->typeIndex() != Ref<U>::typeRegistration.typeIndex)
		throw std::bad_cast();
	return *reinterpret_cast<Ref<U> const *>(this);
}

template<typename T>
typename Ref<T>::TypeRegistration const Ref<T>::typeRegistration;

class A
{
public:
	void foo() const { std::cout << "A::foo()" << std::endl; }
};
class B : public A
{
public:
	void foo() const { std::cout << "B::foo()" << std::endl; }
};
class C : public B
{
public:
	void foo() const { std::cout << "C::foo()" << std::endl; }
};

typedef void (C::*MemFuncPtr)() const;
static MemFuncPtr AFoos[3];


class A1 {};
class B1 : public A1 {};
class B2 : public A1 {};
class C1 : public B1 {};
class C2 : public B2 {};
class C3 : public B1, public B2 {};

static uint16_t inheritance[std::numeric_limits<uint16_t>::max()];

#pragma pack(push, 1)
template<typename T>
class X64PackedPointer
{
	static_assert(sizeof(T *) == sizeof(uint64_t), "");

	_48Bits data;
public:
	explicit X64PackedPointer(T * const p) : data(*reinterpret_cast<_48Bits *>(p)) {}

	T * pointer()
	{
		std::bitset<64> bs(data);
		std::cout << bs << std::endl;
		bs.set(47);
		data = bs.to_ullong();
		std::cout << bs << std::endl;
		uint64_t signExtended = signextend<uint64_t, 48>(data);
		std::bitset<64> bs2(signExtended);
		std::cout << bs2 << std::endl;
		return reinterpret_cast<T *>(signExtended);
	}
};
//static_assert(sizeof(X64PackedPointer<int>) == 6, "");
#pragma pack(pop)

int main()
{
	using namespace std;

	_48Bits bits = *reinterpret_cast<_48Bits const *>(new int(1337));
	int * pppp = reinterpret_cast<int *>(0xcccccccccccccccc);
	pppp = reinterpret_cast<int *>(&bits);
	pppp = reinterpret_cast<int *>(signextend<uint64_t, 48>(reinterpret_cast<uint64_t>(pppp)));
	cout << *pppp << endl;
	delete pppp;
	return 0;

	cout << sizeof(X64PackedPointer<void>) << endl;
	X64PackedPointer<int> pp(new int(42));
	//cout << *pp.pointer() << endl;
	return 0;


	auto ppp = new int(42);
	auto bs = bitset<64>(uint64_t(ppp));
	bs.set(47);
	cout << uint64_t(ppp) << "\t" << bs << endl;
	auto nnn = bs.to_ullong();
	cout << uint64_t(nnn) << "\t" << bitset<64>(signextend<int64_t, 48>(nnn)) << endl;
	return 0;

	//int16_t const iii = -1024;
	//cout << iii << "\t" << bitset<64>(iii) << endl;
	//cout << iii << "\t" << bitset<64>(3) << endl;
	//auto fdsa = signextend<int64_t, 48>(iii);  // sign extend 5 bit number x to r
	//cout << iii << "\t" << bitset<64>(fdsa) << endl;
	//return 0;

	Ref<void> v = Ref<A1>(new A1()).Cast<void>();
	auto a1 = v.Cast<A1>();
	return 0;

	Ref<B1> b1 = new C3();
	Ref<B2> b2 = b1.Cast<B2>();

	inheritance[0] = 0;
	inheritance[1] = 0;
	inheritance[2] = 0;
	inheritance[3] = 1;
	inheritance[4] = 1;
	inheritance[5] = 0;


	AFoos[0] = &A::foo;
	AFoos[1] = &B::foo;
	AFoos[2] = &C::foo;

	A * aa = new A();
	A * bb = new B();
	A * cc = new C();
	aa->foo();
	bb->foo();
	cc->foo();
	(static_cast<C*>(nullptr)->*AFoos[0])();
	(static_cast<C*>(nullptr)->*AFoos[1])();
	(static_cast<C*>(nullptr)->*AFoos[2])();
	delete aa;
	delete bb;
	delete cc;
	return 0;

	uint64_t u = 0xffffULL << 48;
	cout << u << "\t" << hex << u << endl;
	cout << hex << (u | 0xffff) << endl;

	//cout << Ref<string>::typeRegistration.typeIndex << endl;
	//cout << Ref<int>::typeRegistration.typeIndex << endl;

	string s = "test";
	Ref<string> r(&s);
	auto a = r.pointer();
	auto b = r.typeIndex();
	cout << (types[b].typeName() == nullptr ? "null" : types[b].typeName()) << endl;
	int f = 42;
	Ref<int> i(&f);
	auto x = i.pointer();
	auto y = i.typeIndex();
	cout << (types[y].typeName() == nullptr ? "null" : types[y].typeName()) << endl;

	cout << sizeof(Ref<string>) << endl;
	cout << sizeof(Ref<int>) << endl;
	cout << sizeof(uint16_t) << endl << endl;
	cout << sizeof(types) << endl;
	cout << sizeof(type_index) << endl;
	auto fax = type_index(typeid(string));
	cout << fax.name() << endl;
	//cout << (atomic<size_t>().is_lock_free() ? "true" : "false") << endl;
}