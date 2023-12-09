/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christine <christine@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 20:34:13 by christine         #+#    #+#             */
/*   Updated: 2023/12/09 20:53:12 by christine        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal():type("WrongAnimal")
{
	std::cout << " * Wrong Animal Default Constructor called." << std::endl;
}
WrongAnimal::~WrongAnimal()
{
	std::cout << " * Wrong Animal Destructor called." << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal &autre):type(autre.type)
{
	std::cout << " * Animal Copy Constructor called." << std::endl;
}
WrongAnimal& WrongAnimal::operator=(const WrongAnimal &autre)
{
	std::cout << " * Wrong Animal operator of assignation called." << std::endl;
	if (this != &autre)
	{
		this->type = autre.getType();
	}
	return (*this);
}

std::string WrongAnimal::getType() const
{
	return(this->type);
}

void WrongAnimal::makeSound() const
{
	std::cout << this->type << " Wrong sound." << std::endl;
}
