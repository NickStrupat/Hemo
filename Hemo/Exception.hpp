#ifndef HEMO_SYSTEM_EXCEPTION_HPP_INCLUDED
#define HEMO_SYSTEM_EXCEPTION_HPP_INCLUDED

#include "Object.hpp"
#include "Reference.hpp"
#include "String.hpp"

#include <memory>

namespace System {
	class Exception : public Object {
		String message;
		Ref<Exception> innerException;
	public:
		Exception() {}
		Exception(String message) : message(message), innerException() {}
		Exception(String message, Ref<Exception> innerException)

	};
}

#endif