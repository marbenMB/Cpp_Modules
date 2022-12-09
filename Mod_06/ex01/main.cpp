#include "Serialization.hpp"

int main()
{
	//	You Code
	Data		*a = new(Data);
	uintptr_t	ser;
	Data		*b;

	a->c = 'a';
	a->x = 10;
	a->y = 3.14;

	std::cout << "Char : " << a->c << " - Int : " << a->x << " - Double : " 
	<< a->y << std::endl;

	ser = serialize(a);
	b = deserialize(ser);
	
	std::cout << "Char : " << b->c << " - Int : " << b->x << " - Double : " 
	<< b->y << std::endl;

	std::cout << "******	MAR_BEN CREATION ✅	******" << std::endl;

	return (0);
}
