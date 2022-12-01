#ifndef _RobotomyRequestForm_HPP_
#define _RobotomyRequestForm_HPP_

#include <iostream>
#include "Form.hpp"

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	RobotomyRequestForm : public AForm
{
	public	:
		RobotomyRequestForm ();
		RobotomyRequestForm (std::string target);
		RobotomyRequestForm (RobotomyRequestForm const &obj);
		~RobotomyRequestForm ();
		RobotomyRequestForm &operator= (const RobotomyRequestForm &obj);

		// virtual void	execute (Bureaucrat const &executor) const;
	private	:
		// private attribute.
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
