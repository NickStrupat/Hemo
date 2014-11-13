#include "String.hpp"
#include "SizeType.hpp"

namespace System {
	std::size_t StaticString::Length() const {
		return length;
	}

	std::ostream & operator<<(std::ostream & os, StaticString const & staticString) {
		return os.write(staticString.stringLiteral, staticString.Length());
	}

	String::String() {}

	String::String(char const * stringLiteral) {
		this->stringLiteral = stringLiteral;
	}

	std::size_t String::Length() const {
		if (length == -1)
			length = std::strlen(stringLiteral);
		return length;
	}

	std::ostream & operator<<(std::ostream & os, String const & string) {
		return os.write(string.stringLiteral, string.Length());
	}
}