#include "Boolean.hpp"
#include "String.hpp"

using namespace System;

Boolean::Boolean(bool value) : value(value) {}

String const Boolean::TrueString("True");
String const Boolean::FalseString("False");

String Boolean::ToString() const {
	return this->value ? Boolean::TrueString : Boolean::FalseString;
}