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
				Int32 get_Count() const override { return Int32(vector.size()); }
				Boolean get_IsReadOnly() const override { return Boolean(false); }

				void Add(std::shared_ptr<T> item) override { vector.push_back(item); }
				void Clear() override { vector.clear(); vector.shrink_to_fit(); }
				Boolean Contains(std::shared_ptr<T> item) const override { return Boolean(std::find(vector.cbegin(), vector.cend(), item) != vector.cend()); }
				//void CopyTo(Array<T> array, Int32 startingIndex) const = 0;
				Int32 IndexOf(std::shared_ptr<T> item) {
					auto position = std::find(vector.cbegin(), vector.cend(), item);
					if (position == vector.cend())
						return Int32(-1);
					return position - vector.cbegin();
				}

				//IEnumerator<T> * GetEnumerator() override { return Enumerator(); }
				Boolean Remove(std::shared_ptr<T> item) override { return Boolean(false); }
				/*Boolean RemoveAt(UInt32 )
				Boolean Remove(std::shared_ptr<T> item) {
					
				};*/

				/*class Enumerator : IEnumerator<T> {
				public:
					T get_Current() override { return T(); }
					Boolean MoveNext() override { return Boolean(false); }
					void Reset() override {}
				};*/
			};
		}
	}
}

#endif