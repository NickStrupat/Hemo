#ifndef HEMO_SYSTEM_INT32_HPP_INCLUDED
#define HEMO_SYSTEM_INT32_HPP_INCLUDED

#include <cstdint>

#include "Object.hpp"
#include "String.hpp"

namespace System {
	class Int32 : public Object {
		std::int32_t value;
	public:
		explicit Int32(std::int32_t const value);
		operator std::int32_t() const { return value; }
		String ToString() const;
	};
}

#endif