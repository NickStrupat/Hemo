#include "Int32.hpp"
#include "String.hpp"
#include <string>

using namespace System;

Int32::Int32(std::int32_t value) : value(value) {}

String Int32::ToString() const {
	return String(std::to_wstring(this->value).c_str());
}