#include "String.hpp"
#include "SizeType.hpp"

namespace System {
	String::String() {}

	String::String(char const * cstring) {
		this->cstring = cstring;
	}

	std::size_t String::Length() const {
		if (length == -1)
			length = std::strlen(cstring);
		return length;
	}

	std::ostream & operator<<(std::ostream & os, String const & string) {
		return os.write(string.cstring, string.Length());
	}
}