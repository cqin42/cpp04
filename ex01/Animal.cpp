/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christine <christine@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 18:13:02 by cqin              #+#    #+#             */
/*   Updated: 2023/12/09 19:54:46 by christine        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal():type("Default")
{
	std::cout << " * Animal Default Constructor called." << std::endl;
}
Animal::~Animal()
{
	std::cout << " * Animal Destructor called." << std::endl;
}
Animal::Animal(const Animal &autre):type(autre.type)
{
	std::cout << " * Animal Copy Constructor called." << std::endl;
}
Animal& Animal::operator=(const Animal &autre)
{
	std::cout << " * Animal operator of assignation called." << std::endl;
	if (this != &autre)
	{
		this->type = autre.getType();
	}
	return (*this);
}

std::string Animal::getType() const
{
	return(this->type);
}

void Animal::makeSound() const
{
	std::cout << this->type << " No sound." << std::endl;
}
