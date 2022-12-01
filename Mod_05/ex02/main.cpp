#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try
	{
		Bureaucrat				m9edem("m9edem", 1);
		ShrubberyCreationForm	a("sokna");
		PresidentialPardonForm	b("l3afow");
		
		// a.beSigned(m9edem);
		// a.execute(m9edem);
		b.beSigned(m9edem);
		// b.execute(m9edem);
	}
	catch (const char *msg)
	{
		std::cerr << msg << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
