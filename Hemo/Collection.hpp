#ifndef HEMO_SYSTEM_COLLECTION_HPP_INCLUDED
#define HEMO_SYSTEM_COLLECTION_HPP_INCLUDED

#include "ICollection.hpp"
#include "Int32.hpp"
#include "Boolean.hpp"

#include <memory>
#include <vector>

namespace System {
	namespace Collections {
		namespace Generic {
			template<typename T>
			class Collection : public ICollection<T> {
				std::vector<std::shared_ptr<T>> vector;
			public:
				Collection() : vector() {}
				Int32 get_Count() const { return vector.size() };
				Boolean get_IsReadOnly() const { return false; }

				void Add(std::shared_ptr<T> item) { vector.push_back(item); }
				void Clear() { vector.clear(); vector.shrink_to_fit(); }
				Boolean Contains(std::shared_ptr<T> item) const { std::find(vector.cbegin(), vector.cend(), *item };
				//void CopyTo(Array<T> array, Int32 startingIndex) const = 0;
				Int32 IndexOf(std::shared_ptr<T> item) {
					auto position = std::find(vector.cbegin(), vector.cend(), item);
					if (position == vector.cend())
						return -1;
					return position - vector.cbegin();
				}
				Boolean RemoveAt(UInt32 )
				Boolean Remove(std::shared_ptr<T> item) {
					
				};
			};
		}
	}
}

#endif