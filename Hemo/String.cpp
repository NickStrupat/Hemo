#include "String.hpp"
#include "SizeType.hpp"

namespace System {
	std::size_t StaticString::Length() const {
		return length;
	}

	std::wostream & operator<<(std::wostream & os, StaticString const & staticString) {
		return os.write(staticString.stringLiteral, staticString.Length());
	}

	String::String() {}

	String::String(wchar_t const * stringLiteral) {
		this->stringLiteral = stringLiteral;
	}

	std::size_t String::Length() const {
		if (length == -1)
			length = std::wcslen(stringLiteral);
		return length;
	}

	std::wostream & operator<<(std::wostream & os, String const & string) {
		return os.write(string.stringLiteral, string.Length());
	}
}