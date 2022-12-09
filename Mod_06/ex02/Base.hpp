#ifndef	_BASE_HPP_
#define	_BASE_HPP_

#include <iostream>
#include <cstdlib>

class	Base {
	public :
		virtual ~Base();
};

class	A : public Base {
	public :
		~A();
};

class	B : public Base {
	public :
		~B();
};

class	C : public Base {
	public :
		~C();
};

Base*	generate (void);
void	identify (Base* p);
void	identify (Base& p);

#endif