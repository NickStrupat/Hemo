//#ifndef HEMO_SYSTEM_REFERENCECOUNTABLE_HPP_INCLUDED
//#define HEMO_SYSTEM_REFERENCECOUNTABLE_HPP_INCLUDED
//
//#include <cstddef>
//#include <atomic>
//
//namespace System {
//	template<int Dummy = 0>
//	class ReferenceCountable {
//		mutable std::atomic_flag lock;
//		mutable std::atomic<std::size_t> count;
//		template<typename T> friend void Reference<T>::Reference(T const *);
//		void addReference() const {
//			std::atomic_fetch_add_explicit(&count, 1u, std::memory_order_relaxed);
//		}
//		void removeReference() const {
//			if (std::atomic_fetch_sub_explicit(&count, 1u, std::memory_order_release) == 1) {
//				std::atomic_thread_fence(std::memory_order_acquire);
//				delete this;
//			}
//		}
//	protected:
//		explicit ReferenceCountable() : count(0) {}
//		ReferenceCountable(ReferenceCountable const &) : count(0) {}
//		ReferenceCountable & operator=(ReferenceCountable const &) { return *this; }
//		~ReferenceCountable() = default;
//	};
//}
//
//#endif