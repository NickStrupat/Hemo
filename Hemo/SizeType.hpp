#ifndef HEMO_SYSTEM_SIZE_TYPE_HPP_INCLUDED
#define HEMO_SYSTEM_SIZE_TYPE_HPP_INCLUDED

#include "Object.hpp"
#include <cstddef>
#include <ostream>

namespace System {
	class SizeType : public Object {
		std::size_t value;
		friend std::ostream & operator<<(std::ostream & os, SizeType const & string);
	public:
		SizeType(std::size_t const value);
		String ToString() const;
	};

	std::ostream & operator<<(std::ostream & os, SizeType const & string);
}

#endif