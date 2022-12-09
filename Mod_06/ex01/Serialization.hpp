#ifndef _Serialization_HPP_
#define _Serialization_HPP_

#include <iostream>

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

struct Serialization
{
	int		x;
	double	y;
	char	c;
};

typedef	struct Serialization Data;

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif
