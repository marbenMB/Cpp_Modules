#ifndef _Form_HPP_
#define _Form_HPP_

#include <iostream>
#include <fstream>
#include "Bureaucrat.hpp"

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	Bureaucrat;

class	AForm
{
	public	:
		AForm ();
		AForm (std::string name, int req, int exec);
		AForm (AForm const &obj);
		~AForm ();
		AForm &operator= (const AForm &obj);

		bool		getSign (void) const;
		int			getReq (void) const;
		int			getExec (void) const;
		std::string	const	getName (void) const;

		void	beSigned (Bureaucrat &signee);

		class	GradeTooHighException : public std::exception {
			virtual	const char* what() const throw();
		};

		class	GradeTooLowException : public std::exception {
			virtual	const char* what() const throw();
		};

		int				check_excution (int	executor) const;
		virtual void	execute (Bureaucrat const &executor) const = 0;

	private	:
		std::string	const	_name;
		bool				_isSigned;
		int	const			_required;
		int	const			_execute;

	protected :
		std::string	_target;
};

std::ostream	&operator<< (std::ostream &out, AForm const &obj);
// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
