#include "Form.hpp"

int main()
{
	
	try
	{
		Bureaucrat	goko("goko", 5);
		Bureaucrat	vegita("Vegita", 150);
		Form		sokna("Sokna");


		sokna.beSigned(goko);
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
