/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 20:21:15 by mbenbajj          #+#    #+#             */
/*   Updated: 2023/04/04 21:18:51 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "header.hpp"
#include <map>
#include <vector>
#include <deque>

// int main()
// {
// 	std::map<std::string, int> m;
// 	std::map<std::string, int>::iterator low;
// 	std::map<std::string, int>::iterator up;
// 	std::string	find("1t");
// 	std::string	key;
// 	int		c = 122;
// 	char	f;
	
// 	for (int i = 0; i < 10; i++)
// 	{
// 		if (i == 5)
// 			continue;
// 		key = std::to_string(i);
// 		f = static_cast <char>(c);
// 		key += f;
// 		m.insert(std::make_pair(key , i));
// 		c--;
// 		std::cout << key << std::endl;
// 		std::cout << "- " << key << " -> " << i << std::endl;
// 	}
// 	std::cout << "--------------------" << std::endl;
// 	std::cout << "        " << find << "     " << std::endl;
// 	std::cout << "--------------------" << std::endl;

// 	low = m.lower_bound(find);
// 	up = m.upper_bound(find);

// 	if (low->first != find)
// 		low--;
// 	std::cout << "- Low : " << low->first << " : " << low->second << std::endl; 
// 	std::cout << "- Up : " << up->first << " : " << up->second << std::endl; 
// }

int main()
{
	std::vector<int>	vec;
	std::vector<int>::iterator it;

	vec.push_back(1);
	vec.push_back(2);
	it = vec.begin() + 1;

	if (it != vec.end())
		std::cout << it - vec.begin() << std::endl;
}