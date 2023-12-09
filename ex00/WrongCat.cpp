/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christine <christine@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 20:37:18 by christine         #+#    #+#             */
/*   Updated: 2023/12/09 20:53:06 by christine        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat():WrongAnimal()
{
	this->type = "WrongCat";
	std::cout << " * Wrong Cat Default Constructor called." << std::endl;
}
WrongCat::~WrongCat()
{
	std::cout << " * Wrong Cat Destructor called." << std::endl;
}
WrongCat::WrongCat(const WrongCat &autre):WrongAnimal()
{
	std::cout << " * Wrong Cat Copy Constructor called." << std::endl;
	this->type = autre.type;
}
WrongCat& WrongCat::operator=(const WrongCat &autre)
{
	std::cout << " * Wrong Cat operator of assignation called." << std::endl;
	if (this != &autre)
	{
		this->type = autre.getType();
	}
	return (*this);
}

std::string WrongCat::getType() const
{
	return(this->type);
}

void WrongCat::makeSound() const
{
	std::cout << this->type << " Wrong meow." << std::endl;
}
