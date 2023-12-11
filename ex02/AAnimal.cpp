/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <cqin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 18:13:02 by cqin              #+#    #+#             */
/*   Updated: 2023/12/11 15:41:54 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal():type("Default")
{
	std::cout << " * AAnimal Default Constructor called." << std::endl;
}
AAnimal::~AAnimal()
{
	std::cout << " * AAnimal Destructor called." << std::endl;
}
AAnimal::AAnimal(const AAnimal &autre):type(autre.type)
{
	std::cout << " * AAnimal Copy Constructor called." << std::endl;
}
AAnimal& AAnimal::operator=(const AAnimal &autre)
{
	std::cout << " * AAnimal operator of assignation called." << std::endl;
	if (this != &autre)
	{
		this->type = autre.getType();
	}
	return (*this);
}

std::string AAnimal::getType() const
{
	return(this->type);
}

