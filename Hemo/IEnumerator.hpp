#ifndef HEMO_SYSTEM_IENUMERATOR_HPP_INCLUDED
#define HEMO_SYSTEM_IENUMERATOR_HPP_INCLUDED

#include "Boolean.hpp"

namespace System {
	namespace Collections {
		namespace Generic {
			template<typename T>
			class IEnumerator {
			public:
				virtual ~IEnumerator() = default;
				virtual T get_Current() = 0;
				virtual Boolean MoveNext() = 0;
				virtual void Reset() = 0;
			};
		}
	}
}

#endif