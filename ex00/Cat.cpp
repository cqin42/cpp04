/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <cqin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 18:13:06 by cqin              #+#    #+#             */
/*   Updated: 2023/12/08 14:33:26 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat():Animal()
{
	std::cout << "Cat Default Constructor called." << std::endl;
}
Cat::~Cat()
{
	std::cout << "Cat Destructor called." << std::endl;
}
Cat::Cat(const Cat &autre):
{
	std::cout << "Cat Copy Constructor called." << std::endl;
}
Cat Cat::operator=(const Cat &autre)
{
	std::cout << "Cat operator assignation called." << std::endl;
	if (this != autre)
	{
		this->type = autre.getType();
	}
	return (*this);
}

void Cat::makeSound()
{
	std::cout << this->type << " Meowww" << std::endl;
}
