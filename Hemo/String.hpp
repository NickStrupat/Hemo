#ifndef HEMO_SYSTEM_STRING_HPP_INCLUDED
#define HEMO_SYSTEM_STRING_HPP_INCLUDED

#include "Object.hpp"
#include <cstddef>
#include <cstring>
#include <ostream>

namespace System {
	class StringBase : public Object {
	public:
		virtual std::size_t Length() const = 0;
	};

	class StaticString : public StringBase {
		char const * stringLiteral;
		std::size_t const length;
		friend std::ostream & operator<<(std::ostream & os, StaticString const & staticString);
	public:
		template<std::size_t N>
		StaticString(char const (&stringLiteral)[N]) : stringLiteral(stringLiteral), length(N - 1) {}
		std::size_t Length() const;
	};

	class String : public StringBase {
		char const * stringLiteral;
		mutable std::size_t length = -1;
		friend std::ostream & operator<<(std::ostream & os, String const & string);
	public:
		String();
		String(char const * stringLiteral);
		std::size_t Length() const;
	};

	std::ostream & operator<<(std::ostream & os, String const & string);
}

#endif