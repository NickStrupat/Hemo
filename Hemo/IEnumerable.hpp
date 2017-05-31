#ifndef HEMO_SYSTEM_IENUMERABLE_HPP_INCLUDED
#define HEMO_SYSTEM_IENUMERABLE_HPP_INCLUDED

#include <type_traits>
#include "Object.hpp"
#include "IEnumerator.hpp"

namespace System {
	namespace Collections {
		namespace Generic {
			template<typename T>
			class IEnumerable {
				STATIC_ASSERT_IS_DESCENEDANT_OF_SYSTEM_OBJECT(T)
			public:
				virtual ~IEnumerable() = default;
				//virtual IEnumerator<T> * GetEnumerator() = 0;
			};
		}
	}
}

#endif