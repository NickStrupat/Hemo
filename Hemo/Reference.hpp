#ifndef HEMO_SYSTEM_REFERENCE_HPP_INCLUDED
#define HEMO_SYSTEM_REFERENCE_HPP_INCLUDED

#include "Object.hpp"

#include <cstddef>
#include <atomic>
#include <type_traits>

namespace System {
	template<typename T>
	class Ref {
		STATIC_ASSERT_IS_DESCENEDANT_OF_SYSTEM_OBJECT(T)
		std::shared_ptr<T> pointer;
	public:
		explicit Ref(T * const pointer) : pointer(pointer) {}
		Ref(Ref const & ref) : pointer(ref.pointer) {}
		T & Resolve() const { return *pointer; }
	};
}

#endif