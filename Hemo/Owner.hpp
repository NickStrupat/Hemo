//#ifndef HEMO_SYSTEM_OWNER_HPP_INCLUDED
//#define HEMO_SYSTEM_OWNER_HPP_INCLUDED
//
//#include "Object.hpp"
//
//#include <cstddef>
//#include <memory>
//
//namespace System {
//	template<typename T>
//	class Owner : public Object<T> {
//		STATIC_ASSERT_IS_DESCENEDANT_OF_SYSTEM_OBJECT(T)
//		std::shared_ptr<T> sharedPtr;
//	public:
//		shared_ptr() : sharedPtr() {}
//		shared_ptr(std::nullptr_t) : sharedPtr(nullptr) {}
//
//	};
//}
//
//#endif