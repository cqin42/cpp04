/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <cqin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 18:19:01 by cqin              #+#    #+#             */
/*   Updated: 2023/12/11 19:22:37 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure():type("cure")
{
	std::cout << "Ice Constructor Called." << std::endl;
}
Cure::~Cure()
{
	std::cout << "Ice Destructor Called." << std::endl;
}
Cure::Cure(const Cure& autre):type("cure")
{
	std::cout << "Cure Copy Constructor Called." << std::endl;
		*this = autre;
}
Cure::Cure& operator=(const Cure &autre)
{
	std::cout << "Cure = operator Called." << std::endl;
	if (this != &autre)
		this->type = autre.type;
	return (*this);
}

AMateria* Cure::clone()
{
	AMateria *cloneCure = new Cure();
	return (cloneCure);
}
void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target  << "'s wounds *"<< std::endl;
}
