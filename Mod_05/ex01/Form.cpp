#include "Form.hpp"

Form::Form() : _isSigned(0), _required(150), _execute(150)
{
	std::cout << "Form : Default Constructor Called" << std::endl;
}

Form::Form (std::string name) : _name(name), _isSigned(0), _required(150), _execute(150)
{
	std::cout << "Form : Constructor Called" << std::endl;
}

Form::~Form()
{
	std::cout << "Form : Destructor Called" << std::endl;
}

Form::Form(Form const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

Form	&Form::operator= (const Form &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		this->_isSigned = obj._isSigned;
	}
	return (*this);
}

bool	Form::getSign (void) const { return (this->_isSigned); }

int	const	Form::getReq (void) const { return (this->_required); }

int	const	Form::getExec (void) const { return (this->_execute); }

std::string	const Form::getName (void) const { return (this->_name); }

const	char*	Form::GradeTooHighException::what() const throw()
{
	return ("Grade Too Low To Sign!!");
}

const	char*	Form::GradeTooLowException::what() const throw()
{
	return ("Grade To High To Sigh!!");
}

std::ostream	&operator<< (std::ostream &out, Form const &obj)
{
	out << "- Form Name : " << obj.getName() << std::endl
		<< "- Is Signed : " << obj.getSign() << std::endl
		<< "- Required  : " << obj.getReq() << std::endl
		<< "- Executer  : " << obj.getExec() << std::endl;
}
