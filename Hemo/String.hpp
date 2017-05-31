#ifndef HEMO_SYSTEM_STRING_HPP_INCLUDED
#define HEMO_SYSTEM_STRING_HPP_INCLUDED

#include "Object.hpp"
#include <cstddef>
#include <cstring>
#include <ostream>

namespace System {
	class StringBase : public Object {
	protected:
		~StringBase() = default;
	public:
		virtual std::size_t Length() const = 0;
	};

	class StaticString : public StringBase {
		wchar_t const * stringLiteral;
		std::size_t const length;
		friend std::wostream & operator<<(std::wostream & os, StaticString const & staticString);
	public:
		template<std::size_t N>
		StaticString(wchar_t const (&stringLiteral)[N]) : stringLiteral(stringLiteral), length(N - 1) {}
		std::size_t Length() const override;
	};

	class String : public StringBase {
		wchar_t const * stringLiteral;
		mutable std::size_t length = -1;
		friend std::wostream & operator<<(std::wostream & os, String const & string);
	public:
		String();
		String(wchar_t const * stringLiteral);
		std::size_t Length() const override;
	};

	std::wostream & operator<<(std::wostream & os, String const & string);
}

#endif