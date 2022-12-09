/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 16:25:54 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/12/09 16:31:27 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base() {}
A::~A() {}
B::~B() {}
C::~C() {}

Base*	generate (void)
{
	int	random;

	srand(time(0));
	random = rand() % 3;
	if (random == 1)
	{
		std::cout << "A : Created!" << std::endl;
		return new A;
	}
	else if (random == 2)
	{
		std::cout << "B : Created!" << std::endl;
		return new B;
	}
	else
	{
		std::cout << "C : Created!" << std::endl;
		return new C;
	}
	return NULL;
}

void	identify (Base* p)
{
	if (dynamic_cast<A *>(p) != NULL)
		std::cout << "A : ";
	if (dynamic_cast<B *>(p) != NULL)
		std::cout << "B : ";
	if (dynamic_cast<C *>(p) != NULL)
		std::cout << "C : ";
	std::cout << "Success ptr cast!" << std::endl;
}

void	identify (Base& p)
{
	Base	tmp;
	try {
		std::cout << "A :";
		tmp = dynamic_cast<A &>(p);
		std::cout << " Success ref cast!" << std::endl;
	} catch (std::bad_cast &e) {
		std::cout << " Failed ref cast!" << std::endl;
	}
	try {
		std::cout << "B :";
		tmp = dynamic_cast<B &>(p);
		std::cout << " Success ref cast!" << std::endl;
	} catch (std::bad_cast &e) {
		std::cout << " Failed ref cast!" << std::endl;
	}
	try {
		std::cout << "C :";
		tmp = dynamic_cast<C &>(p);
		std::cout << " Success ref cast!" << std::endl;
	} catch (std::bad_cast &e) {
		std::cout << " Failed ref cast!" << std::endl;
	}
}