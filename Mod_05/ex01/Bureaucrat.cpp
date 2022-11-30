#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Bureaucrat : Default Constructor Called" << std::endl;
}

Bureaucrat::Bureaucrat (std::string name, int grade) : _name(name), _grade(grade)
{
	if (name.empty())
		throw "Element Exception!!";
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	std::cout << "Bureaucrat : Constructor Called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat : Destructor Called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

Bureaucrat	&Bureaucrat::operator= (const Bureaucrat &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		this->_grade = obj._grade;
	}
	return (*this);
}

std::string	Bureaucrat::getName (void) const { return (this->_name); }

int			Bureaucrat::getGrade (void) const { return (this->_grade); }

void		Bureaucrat::incGrade (void)
{
	if (_grade > 1 && _grade <= 150)
		_grade--;
	else
		throw	Bureaucrat::GradeTooHighException();
}

void		Bureaucrat::decGrade (void)
{
	if (_grade >= 1 && _grade < 150)
		_grade++;
	else
		throw	Bureaucrat::GradeTooLowException();
}
 
const	char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade Too High!!");
}

const	char*	Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade Too Low!!");
}

void	Bureaucrat::signForm (std::string name, bool call) const
{
	if (call)
		std::cout << this->getName() << " signed " << name << std::endl;
	else
	{
		std::cout << this->getName() << " couldn't sign "
				<< name << " , Too Low Grade!!"
				<< std::endl;
	}
}

std::ostream	&operator<< (std::ostream &out, Bureaucrat	const &obj)
{
	out << obj.getName() << " , bureaucrat grade " << obj.getGrade() << std::endl;
	return (out);
}