#include "Serialization.hpp"

uintptr_t	serialize (Data* ptr)
{
	uintptr_t	ser;

	ser = reinterpret_cast <uintptr_t>(ptr);
	return ser;
}

Data*	deserialize (uintptr_t raw)
{
	Data	*_new;

	_new = reinterpret_cast <Data*>(raw);
	return _new;
}
