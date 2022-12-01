#ifndef _Bureaucrat_HPP_
#define _Bureaucrat_HPP_

#include <iostream>
#include <exception>
#include "Form.hpp"

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	Form;

class	Bureaucrat
{
	public	:
		Bureaucrat ();
		Bureaucrat (std::string name, int grade);
		Bureaucrat (Bureaucrat const &obj);
		~Bureaucrat ();
		Bureaucrat &operator= (const Bureaucrat &obj);

		std::string	getName (void) const;
		int			getGrade (void) const;
		void		incGrade (void);
		void		decGrade (void);

		void	signForm (Form &formule) const;
		
		class	GradeTooHighException : public std::exception {
			virtual const char*	what() const throw();
		};

		class	GradeTooLowException : public std::exception {
			virtual const char*	what() const throw();
		};


	private	:
		std::string	const	_name;
		int					_grade;
};
std::ostream	&operator<< (std::ostream &out, Bureaucrat const &obj);
// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //
#endif
