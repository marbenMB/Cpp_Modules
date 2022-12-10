#include "Header.hpp"

// int main()
// {
// 	//	***	INT *** :
// 	int	a = 4;
// 	int	b = 14;

// 	std::cout << "	INT : " << std::endl << "	-----	" << std::endl
// 	<< "  - a : " << a << " | - b : " << b << std::endl << std::endl;

// 	::swap<int>(a, b);
// 	std::cout << "<After Swap> : ";
// 	std::cout << " - a : " << a << " | - b : " << b << std::endl << std::endl;

// 	std::cout << "<Min Value> : " << ::min<int>(a, b) << std::endl << std::endl;
// 	std::cout << "<Max Value> : " << ::max<int>(a, b) << std::endl << std::endl;

// 	//	***	CHAR *** :
// 	char	c = 'A';
// 	char	d = 'B';

// 	std::cout << "	char : " << std::endl << "	-----	" << std::endl
// 	<< "  - c : " << c << " | - d : " << d << std::endl << std::endl;

// 	::swap<char>(c, d);
// 	std::cout << "<After Swap> : ";
// 	std::cout << " - c : " << c << " | - d : " << d << std::endl << std::endl;

// 	std::cout << "<Min Value> : " << ::min<char>(c, d) << std::endl << std::endl;
// 	std::cout << "<Max Value> : " << ::max<char>(c, d) << std::endl << std::endl;

// 	//	***	STRING *** :
// 	std::string	str1 = "Hello!";
// 	std::string	str2 = "World!";

// 	std::cout << "	string : " << std::endl << "	-----	" << std::endl
// 	<< "  - str1 : " << str1 << " | - str2 : " << str2 << std::endl << std::endl;

// 	::swap<std::string>(str1, str2);
// 	std::cout << "<After Swap> : ";
// 	std::cout << " - str1 : " << str1 << " | - str2 : " << str2 << std::endl << std::endl;

// 	std::cout << "<Min Value> : " << ::min<std::string>(str1, str2) << std::endl << std::endl;
// 	std::cout << "<Max Value> : " << ::max<std::string>(str1, str2) << std::endl << std::endl;

// 	std::cout << "******	MAR_BEN CREATION √	******" << std::endl;

// 	return (0);
// }

int main( void ) {
	int a = 2;
	int b = 3;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	return 0;
}
