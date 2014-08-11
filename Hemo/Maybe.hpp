#ifndef HEMO_SYSTEM_MAYBE_HPP_INCLUDED
#define HEMO_SYSTEM_MAYBE_HPP_INCLUDED

#include <cstddef>
#include <exception>

namespace System {
	template<typename T>
	class Maybe
	{
		T * value;
		Boolean hasValue;
	public:
		Maybe() : value(nullptr), hasValue(false) {}
		Maybe(T & value) : value(&value), hasValue(true) {}
		Boolean HasValue() { return hasValue; }
		T & Value() {
			if (!HasValue)
				throw std::exception("Maybe has no value");
			return *value;
		}
	};
}

#endif