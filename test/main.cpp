/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 20:21:15 by mbenbajj          #+#    #+#             */
/*   Updated: 2023/04/05 21:22:45 by mbenbajj         ###   ########.fr       */
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
#include <ctime>

int main() {
    std::clock_t start = std::clock();

    // Code section to measure time for
    for (int i = 0; i < 1000000; i++) {
        // Do some work here
    }

    std::clock_t end = std::clock();
    double elapsed_secs = double(end - start) / CLOCKS_PER_SEC;

    std::cout << "Time taken: " << elapsed_secs << " seconds" << std::endl;
    return 0;
}
