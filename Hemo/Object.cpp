#include "Object.hpp"
#include "String.hpp"
#include "SizeType.hpp"
#include <typeinfo>

using namespace System;

String Object::ToString() const {
	return String(L"System.Object"/*typeid(*this).name()*/);
}

SizeType Object::GetHashCode() const {
	return typeid(*this).hash_code() ^ std::size_t(this);
}