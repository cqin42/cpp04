/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christine <christine@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 18:13:11 by cqin              #+#    #+#             */
/*   Updated: 2023/12/09 20:05:41 by christine        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal()
{
	this->type = "Dog";
	std::cout << "Dog Default Constructor called." << std::endl;
}
Dog::~Dog()
{
	std::cout << "Dog Destructor called." << std::endl;
}
Dog::Dog(const Dog &autre): Animal()
{
	this->type = autre.type;
	std::cout << "Dog Copy Constructor called." << std::endl;
}
Dog Dog::operator=(const Dog &autre)
{
	std::cout << "Dog operator assignation called." << std::endl;
	if (this != &autre)
	{
		this->type = autre.type;
	}
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << this->type << " Waouf Waouf." << std::endl;
}
