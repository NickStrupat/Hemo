#ifndef HEMO_SYSTEM_OBJECT_HPP_INCLUDED
#define HEMO_SYSTEM_OBJECT_HPP_INCLUDED

#include <memory>

#include "Countable.hpp"
#include "ReferenceCountable.hpp"

#define STATIC_ASSERT_IS_DESCENEDANT_OF_SYSTEM_OBJECT(T) static_assert(std::is_base_of<::System::Object, T>::value, "T must be a descendant of System::Object");

namespace System {
	class String;
	class SizeType;

	class Object {
	public:
		/*static Boolean ReferenceEquals(Object const & objectA, Object const & objectB);
		Boolean Equals(Object const & object) const;*/
		virtual String ToString() const;
		virtual SizeType GetHashCode() const;
	};
}

#endif