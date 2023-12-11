/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christine <christine@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 18:13:16 by cqin              #+#    #+#             */
/*   Updated: 2023/12/09 22:44:59 by christine        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	Animal *animals[2] = {new Dog(), new Cat()};

	for (int i = 0; i < 2; i++)
		delete animals[i];

	std::cout << "------------------------------------" << std::endl;
	Cat cat;
	std::cout << cat.getType() << " has an idea : " << cat.getIdea(0) << std::endl;
	cat.setIdea("blabla", 0);
	std::cout << cat.getType() << " has an idea : " << cat.getIdea(0) << std::endl;

	Cat cat_copy(cat);
	std::cout << cat_copy.getType() << " copy has an idea : " << cat_copy.getIdea(0) << std::endl;
	cat_copy.setIdea("ttttttttttttt", 0);
	std::cout << cat_copy.getType() << " copy has an idea : " << cat_copy.getIdea(0) << std::endl;
	std::cout << cat.getType() << " has an idea : " << cat.getIdea(0) << std::endl;


}
