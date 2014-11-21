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
				static_assert(std::is_base_of<::System::Object, T>::value, "T must be a descendant of System::Object");
			public:
				virtual IEnumerator<T> GetEnumerator() = 0;
			};
		}
	}
}

#endif