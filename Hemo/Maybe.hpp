#ifndef HEMO_SYSTEM_MAYBE_HPP_INCLUDED
#define HEMO_SYSTEM_MAYBE_HPP_INCLUDED

#include "Exception.hpp"

#include <cstddef>
#include <exception>
#include <memory>

namespace System {
	template<typename T>
	class MaybeException : public Exception {};

	template<typename T>
	class Maybe	{
		STATIC_ASSERT_IS_DESCENEDANT_OF_SYSTEM_OBJECT(T)
		T value;
		Boolean hasValue;
	public:
		Maybe() : value(), hasValue(true) {}
		Maybe(T & value) : value(value), hasValue(true) {}
		Boolean HasValue() const { return hasValue; }
		T & Value() {
			if (!HasValue)
				throw std::exception("Maybe has no value");
			return *value;
		}
	};

	template<typename T>
	class Maybe<std::shared_ptr<T>> {
		STATIC_ASSERT_IS_DESCENEDANT_OF_SYSTEM_OBJECT(T)
		T * value;
		Boolean hasValue;
	public:
		Maybe() : value(nullptr), hasValue(false) {}
		Maybe(T & value) : value(&value), hasValue(true) {}
		Boolean HasValue() const { return hasValue; }
		T & Value() {
			if (!HasValue)
				throw std::exception("Maybe has no value");
			return *value;
		}
	};
}

#endif