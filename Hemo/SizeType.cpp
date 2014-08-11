#include "SizeType.hpp"
#include "String.hpp"

namespace System {
	SizeType::SizeType(std::size_t const value) {
		this->value = value;
	}

	String SizeType::ToString() const {
		return String();
	}

	std::ostream & operator<<(std::ostream & os, SizeType const & sizeType) {
		return os << sizeType.value;
	}
}