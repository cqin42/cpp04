/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <cqin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 18:13:02 by cqin              #+#    #+#             */
/*   Updated: 2023/12/07 18:34:58 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << " * Animal Default Constructor called."
}

Animal::~Animal()
{
	std::cout << " * Animal Destructor called."
}

Animal::Animal(const Animal &autre)
{
	std::cout << " * Animal Copy Constructor called."
	*this = autre;
}
Animal Animal::operator=(const Animal &autre)
{
	std::cout << " * Animal operator of assignation called."
	if (this != autre)
	{
		this->type = autre.getType();
	}
}

std::string Animal::getType()
{
	return(this->type);
}

void Animal::makeSound()
{
}
