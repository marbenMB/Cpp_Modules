#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreation", 145, 137)
{
	std::cout << "ShrubberyCreationForm : Default Constructor Called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm (std::string target) : AForm("ShrubberyCreation", 145, 137)
{
	this->_target = target;
	std::cout << "ShrubberyCreationForm : Constructor Called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm : Destructor Called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator= (const ShrubberyCreationForm &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		this->_target = obj._target;
	}
	return (*this);
}

void	ShrubberyCreationForm::execute (Bureaucrat const &executor) const
{
	std::ofstream	outFile;
	std::string		fName = _target;

	if (!check_excution(executor.getGrade()))
		throw AForm::GradeTooLowException();
	
	fName.append("_shrubbery");
	outFile.open(fName, std::ios::out);
	if (outFile.is_open())
	{
		outFile << "           ,@@@@@@@," << std::endl
					<< "   ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl
					<< ",&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl
					<< ",%&\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl
			   		<< "%&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl
					<< "%&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl
			   		<< "`&%\\ ` /%&'    |.|        \\ '|8'" << std::endl
					<< "    |o|        | |         | |" << std::endl
					<< "    |.|        | |         | |" << std::endl
					<< " \\/ ._\\/\\/_/__/  ,\\_//__\\/.  \\_//__/_";
		outFile.close();
	}
	else
		std::cerr << "Can't Create OutPut File!!" << std::endl;
}