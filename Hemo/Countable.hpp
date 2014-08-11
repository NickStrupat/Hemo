#ifndef HEMO_SYSTEM_COUNTABLE_HPP_INCLUDED
#define HEMO_SYSTEM_COUNTABLE_HPP_INCLUDED

#include <cstddef>

namespace System {
	template <typename T>
	class Countable
	{
		static std::size_t count;
	protected:
		~Countable() { --count; }
		Countable() { ++count; }
		Countable(Countable const&) { ++count; }
		static std::size_t Count() { return count; }
	};

	template <typename T>
	std::size_t Countable<T>::count = 0;
}

#endif