#ifndef HEMO_SYSTEM_STRING_HPP_INCLUDED
#define HEMO_SYSTEM_STRING_HPP_INCLUDED

#include "Object.hpp"
#include <cstddef>
#include <cstring>
#include <ostream>

namespace System {
	class String : public Object {
		char const * cstring;
		mutable std::size_t length = -1;
		friend std::ostream & operator<<(std::ostream & os, String const & string);
	public:
		String();
		String(char const * cstring);
		std::size_t Length() const;
	};

	std::ostream & operator<<(std::ostream & os, String const & string);
}

#endif