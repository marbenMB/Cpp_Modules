/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 00:33:21 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/11/13 00:33:22 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

int	main()
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << std::setw(17) << "str addr : " << &str << std::endl;
	std::cout << "stringREF addr : " << &stringREF << std::endl;
	std::cout << "stringPTR addr : " << &stringPTR << std::endl;
	std::cout << std::endl;
	std::cout << std::setw(18) << "str value : " << str << std::endl;
	std::cout << "stringREF Value : " << stringREF << std::endl;
	std::cout << "stringPTR Value : " << *stringPTR << std::endl;
}