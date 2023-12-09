/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christine <christine@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 18:13:06 by cqin              #+#    #+#             */
/*   Updated: 2023/12/09 20:06:07 by christine        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal()
{
	this->type = "Cat";
	std::cout << "Cat Default Constructor called." << std::endl;
}
Cat::~Cat()
{
	std::cout << "Cat Destructor called." << std::endl;
}
Cat::Cat(const Cat &autre): Animal()
{
	this->type = autre.type;
	std::cout << "Cat Copy Constructor called." << std::endl;
}
Cat Cat::operator=(const Cat &autre)
{
	std::cout << "Cat operator assignation called." << std::endl;
	if (this != &autre)
	{
		this->type = autre.type;
	}
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << this->type << " Meowww" << std::endl;
}
