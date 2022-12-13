/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 21:37:15 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/12/12 23:18:39 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int _fst()
{
	std::cout << "-> First Test" << std::endl;
	Span sp = Span(5);
	
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	// sp.addNumber(1);	//	Adding extra element.
	
	std::cout << "Shortest Span : " << sp.shortestSpan() << std::endl;
	std::cout << "Longest Span : " << sp.longestSpan() << std::endl;
	return 0;
}

void	_snd()
{
	std::cout << "-> First Test" << std::endl;
	Span	my(4);

	my.addNumber(2);
	my.addNumber(3);
	my.addNumber(1);
	std::cout << "Shortest Span : " << my.shortestSpan() << std::endl;
	std::cout << "Longest Span : " << my.longestSpan() << std::endl;
}

void	_thd()
{
	std::cout << "-> Third Test" << std::endl;
	Span	sp(24);
	std::vector<int>	fstVec;
	std::vector<int>	sndVec;

	srand(time(0));
	for (int i = 0; i < 9; i++)
		fstVec.push_back(rand() % 999);
	for (int i = 0; i < 15; i++)
		sndVec.push_back(rand() % 10000);
		
	sp.fill<std::vector<int> >(fstVec.begin(), fstVec.end());
	sp.fill<std::vector<int> >(sndVec.begin(), sndVec.end());
	// sp.display();
	
	std::cout << "Shortest Span : " << sp.shortestSpan() << std::endl;
	std::cout << "Longest Span : " << sp.longestSpan() << std::endl;
}

int main()
{
	//	You Code
	try
	{
		_fst();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	try
	{
		_snd();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	try
	{
		_thd();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	
	std::cout << "******	MAR_BEN CREATION √	******" << std::endl;

	return (0);
}
