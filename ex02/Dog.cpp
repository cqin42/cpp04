/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <cqin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 18:13:11 by cqin              #+#    #+#             */
/*   Updated: 2023/12/11 15:40:10 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): AAnimal()
{
	this->type = "Dog";
	this->_brain = new Brain();
	std::cout << "Dog Default Constructor called." << std::endl;
}
Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Dog Destructor called." << std::endl;
}
Dog::Dog(const Dog &autre): AAnimal()
{
	this->type = autre.type;
	this->_brain = new Brain(*autre._brain);
	std::cout << "Dog Copy Constructor called." << std::endl;
}
Dog Dog::operator=(const Dog &autre)
{
	std::cout << "Dog operator assignation called." << std::endl;
	if (this != &autre)
	{
		this->type = autre.type;
		delete this->_brain;
		this->_brain = new Brain();
		this->_brain = autre._brain;
	}
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << this->type << " Waouf Waouf." << std::endl;
}
