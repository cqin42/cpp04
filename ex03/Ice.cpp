/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <cqin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 18:19:08 by cqin              #+#    #+#             */
/*   Updated: 2023/12/11 19:21:04 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice():type("ice")
{
	std::cout << "Ice Constructor Called." << std::endl;
}
Ice::~Ice()
{
	std::cout << "Ice Destructor Called." << std::endl;
}
Ice::Ice(const Ice& autre):type("ice")
{
	std::cout << "Ice Copy Constructor Called." << std::endl;
		*this = autre;
}
Ice::Ice& operator=(const Ice &autre)
{
	std::cout << "Ice = operator Called." << std::endl;
	if (this != &autre)
		this->type = autre.type;
	return (*this);
}

AMateria* Ice::clone()
{
	AMateria *cloneIce = new Ice();
	return (cloneIce);
}
void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target << " *" << std::endl;
}
