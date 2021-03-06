#include "Boolean.hpp"
#include "String.hpp"

using namespace System;

Boolean::Boolean() : value(false) {}
Boolean::Boolean(bool const value) : value(value) {}
Boolean::operator bool() const { return value; }

String const Boolean::TrueString(L"True");
String const Boolean::FalseString(L"False");

String Boolean::ToString() const {
	return this->value ? Boolean::TrueString : Boolean::FalseString;
}