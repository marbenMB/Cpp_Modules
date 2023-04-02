#ifndef _RPN_HPP_
#define _RPN_HPP_

#include <iostream>
#include <stack>

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	RPN
{
	public	:
		RPN ();
		RPN (char *tab);
		RPN (RPN const &obj);
		~RPN ();
		RPN &operator= (const RPN &obj);
		double	getRes (void) const;

	private	:
		std::stack<int>	_DB;
		double			_res;
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

std::ostream	&operator<< (std::ostream &out, RPN claculation);

#endif
