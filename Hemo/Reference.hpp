#ifndef HEMO_SYSTEM_REFERENCE_HPP_INCLUDED
#define HEMO_SYSTEM_REFERENCE_HPP_INCLUDED

#include <cstddef>
#include <atomic>
#include <type_traits>

namespace System {
	template<typename T>
	class Reference {
		static_assert(std::is_base_of<Object, T>::value, "T does not inherit from System::Object");
		T * const pointer;
		T * const acquireReference(T * const pointer) {
			while (lock.test_and_set(std::memory_order_acquire))  // acquire lock
				;
			pointer->lock
		}
	public:
		explicit Reference(T * const pointer) : pointer(pointer) {
			pointer->addReference();
		}
		Reference(Reference const & reference) {
			++pointer->count;
		}
		~Reference() {
			if (--pointer->count == 0)
				delete pointer;
		}
	};
}

#endif