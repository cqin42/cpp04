/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christine <christine@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 18:13:06 by cqin              #+#    #+#             */
/*   Updated: 2023/12/09 22:39:29 by christine        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal()
{
	this->type = "Cat";
	this->_brain = new Brain();
	std::cout << "Cat Default Constructor called." << std::endl;
}
Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Cat Destructor called." << std::endl;
}
Cat::Cat(const Cat &autre): Animal()
{
	this->type = autre.type;
	this->_brain = new Brain(*autre._brain);
	std::cout << "Cat Copy Constructor called." << std::endl;
}
Cat Cat::operator=(const Cat &autre)
{
	std::cout << "Cat operator assignation called." << std::endl;
	if (this != &autre)
	{
		this->type = autre.type;
		delete this->_brain;
		this->_brain = new Brain();
		this->_brain = autre._brain;
	}
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << this->type << " Meowww" << std::endl;
}

std::string Cat::getIdea(int pos) const
{
	return (this->_brain->getIdea(pos));
}

void Cat::setIdea(std::string idea, int pos)
{
	return (this->_brain->setIdea(idea, pos));
}
