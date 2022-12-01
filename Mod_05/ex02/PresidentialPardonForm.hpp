#ifndef _PresidentialPardonForm_HPP_
#define _PresidentialPardonForm_HPP_

#include <iostream>
#include "Form.hpp"

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	PresidentialPardonForm : public AForm
{
	public	:
		PresidentialPardonForm ();
		PresidentialPardonForm (std::string target);
		PresidentialPardonForm (PresidentialPardonForm const &obj);
		~PresidentialPardonForm ();
		PresidentialPardonForm &operator= (const PresidentialPardonForm &obj);

		virtual void	execute (Bureaucrat const &executor) const;
	private	:
		// private attribute.
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
