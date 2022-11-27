/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 15:34:18 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/11/27 01:12:38 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

// int main()
// {
// 	const Animal* meta = new Animal();
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();
	
// 	std::cout << j->getType() << " " << std::endl;
// 	std::cout << i->getType() << " " << std::endl;
// 	i->makeSound(); //will output the cat sound!
// 	j->makeSound();
// 	meta->makeSound();

// 	const WrongAnimal *wrongMeta = new WrongCat();

// 	wrongMeta->makeSound();

	
// 	delete meta;
// 	delete i;
// 	delete j;
// 	delete wrongMeta;
// 	return (0);
// }

int _main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	Dog *a = new Dog();

	
	{
		Dog tmp = *a;
	}
	
	delete j;//should not create a leak
	delete i;
	delete a;
	return 0;
}
int main(){
	_main();
	system("leaks Animal");
}