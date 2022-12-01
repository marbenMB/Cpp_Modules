#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try
	{
		Bureaucrat				king("King", 1);
		Bureaucrat				m9edem("m9edem", 20);
		Bureaucrat				chawch("Chawch", 40);
		ShrubberyCreationForm	a("sokna");
		PresidentialPardonForm	b("l3afow");
		RobotomyRequestForm		c("Roboto");

		std::cout << std::endl << "**** Starting Tests ****" << std::endl << std::endl;
		
		a.beSigned(chawch);
		chawch.signForm(a);
		a.execute(chawch);

		c.beSigned(chawch);
		chawch.signForm(c);
		c.execute(chawch);

		b.beSigned(king);
		king.signForm(b);
		b.execute(king);
	}
	catch (const char *msg)
	{
		std::cerr << msg << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl << "**** Finishing Tests ****" << std::endl << std::endl;
	return (0);
}
