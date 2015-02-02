#ifndef HEMO_SYSTEM_ICOLLECTION_HPP_INCLUDED
#define HEMO_SYSTEM_ICOLLECTION_HPP_INCLUDED

#include "IEnumerable.hpp"
#include "Int32.hpp"
#include "Boolean.hpp"

#include <memory>

namespace System {
	namespace Collections {
		namespace Generic {
			template<typename T>
			class ICollection : public IEnumerable<T> {
			public:
				Int32 get_Count() const = 0;
				Boolean get_IsReadOnly() const = 0;

				void Add(std::shared_ptr<T> item) = 0;
				void Clear() = 0;
				Boolean Contains(std::shared_ptr<T> item) const = 0;
				//void CopyTo(Array<T> array, Int32 startingIndex) const = 0;
				Boolean Remove(std::shared_ptr<T> item) = 0;
			};
		}
	}
}

#endif