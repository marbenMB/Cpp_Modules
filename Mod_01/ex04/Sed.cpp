
#include "Sed.hpp"

void	Sed::setProp(std::string file, std::string s1, std::string s2)
{
	this->_oFileName = file;
	this->_iFileName = file.append(".replace");
	this->_s1 = s1;
	this->_s2 = s2;
}

std::string		Sed::getOFileName(void)	const
{
	return (this->_oFileName);
}

std::string		Sed::getIFileName(void)	const
{
	return (this->_iFileName);
}

std::ofstream	&Sed::getOFile(void)	const
{
	return (this->_oFile);
}

std::ifstream	&Sed::getIFile(void)	const
{
	return (this->_iFile);
}

std::string	Sed::getS1(void)	const
{
	return (this->_s1);
}

std::string	Sed::getS2(void)	const
{
	return (this->_s2);
}
