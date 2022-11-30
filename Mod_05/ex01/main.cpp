#include "Bureaucrat.hpp"

int main()
{
	
	try
	{
		Bureaucrat	goko("", 5);
		Bureaucrat	vegita("Vegita", 150);

		goko.incGrade();
		vegita.decGrade();
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
