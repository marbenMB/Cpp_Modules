
#include <iostream>
#include <iomanip>

int main()
{
    double x;
    double y;
    std::string hello;
    
    x = 1.6;
    y =  3466.9768;
    // hello = "HELLO WORLD!";
    
	std::cin >> hello;
    std::cout.width(12);
    std::cout << x << std::endl;
    std::cout.width(12);
    std::cout.precision(7);
	std::cout << y << std::endl;
	std::cout << std::setw(11) << hello << std::endl;
}