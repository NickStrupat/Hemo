#include <cstdint>
#include <iostream>

namespace System {
	/*class Boolean : public Object {
		bool value;
	public:
		Boolean(bool const value) : value(value) {}
		operator bool() const { return value; }

		static char const * const FalseString;
		static char const * const TrueString;
	};
	char const * const Boolean::FalseString = "False";
	char const * const Boolean::TrueString = "True";

	class Object {
	public:
		static Boolean ReferenceEquals(Object const & objectA, Object const & objectB) { return &objectA == &objectB; }
		Boolean Equals(Object const & object) { return ReferenceEquals(*this, object); }
		Boolean operator==(Object const & object) { return *this == object; }
	};
	//typedef bool Boolean;

	
	typedef std::uint8_t Byte;
	typedef char16_t Char;
	//typedef DateTime;
	//typedef Decimal;
	typedef double Double;
	typedef std::int32_t Int32;
	typedef std::int64_t Int64;
	typedef std::int8_t SByte;
	typedef std::int16_t Int16;
	typedef float Single;
	typedef std::uint32_t UInt32;
	typedef std::uint64_t UInt64;
	typedef std::uint16_t UInt16;

	class Console {
	public:
		static void WriteLine(Boolean const & boolean) { ::std::cout << (static_cast<bool>(boolean) ? Boolean::TrueString : Boolean::FalseString) << ::std::endl; }
	};*/
}

#include "Boolean.hpp"
#include "Maybe.hpp"

using namespace std;
using namespace System;

class Program {
public:
	static void Main() {
		cout << "Main()" << endl;
	}
} program;

int main() {
	program.Main();
	return 0;

	Boolean isStupid = true;
	cout << isStupid.ToString() << endl;
	cout << static_cast<Object>(isStupid).ToString() << endl;
	cout << isStupid.GetHashCode() << endl;
	String string = "what";
	cout << string.Length() << endl;
	//Console::WriteLine(isStupid);

	Maybe<Boolean> maybe(Boolean(true));
	cout << maybe.HasValue().ToString() << endl;
	Maybe<Boolean> maybeNot;
	cout << maybeNot.HasValue().ToString() << endl;
}