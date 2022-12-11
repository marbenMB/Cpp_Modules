/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 07:49:09 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/12/11 09:51:30 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

// #define MAX_VAL 750
// int _main()
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }

void int_test()
{
	unsigned int		size = 15;
	Array<int>	num(size);

	srand(time(0));
	for (unsigned int i = 0; i < size; i++)
		num[i] = rand() % 20;
	std::cout << "- Printing ORIGIN arr : " << std::endl;
	for (unsigned int i = 0; i < size; i++)
		std::cout << " " << num[i];
	std::cout << std::endl;
	
	Array<int>	copy(num);
	
	std::cout << "- Printing COPY arr : " << std::endl;
	for (unsigned int i = 0; i < copy.size(); i++)
		std::cout << " " << copy[i];
	std::cout << std::endl;

	//	This line throw exception.
	copy[-1] = 4;
}

void character_test()
{
	unsigned int		size = 15;
	Array<char>	num(size);

	srand(time(0));
	for (unsigned int i = 0; i < size; i++)
	{
		int	val = rand() % 127;
		if (val <= 32)
			val += (33 - val);
		num[i] = static_cast<char>(val);
	}
	std::cout << "- Printing ORIGIN arr : " << std::endl;
	for (unsigned int i = 0; i < size; i++)
		std::cout << " " << num[i];
	std::cout << std::endl;
	
	Array<char>	copy(num);
	
	std::cout << "- Printing COPY arr : " << std::endl;
	for (unsigned int i = 0; i < copy.size(); i++)
		std::cout << " " << copy[i];
	std::cout << std::endl;

	//	This line Throw exception.
	copy[77] = 4;
}

int	main()
{
	try {
		std::cout << std::endl << "  >> Int Test : " << std::endl;
		int_test();
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	try {	
		std::cout << std::endl << "  >> Char Test : " <<  std::endl;
		character_test();
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	// system("leaks Array");
}
