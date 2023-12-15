/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <cqin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 18:19:01 by cqin              #+#    #+#             */
/*   Updated: 2023/12/15 16:45:58 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure():AMateria("cure")
{
	std::cout << "Cure Constructor Called." << std::endl;
}
Cure::~Cure()
{
	std::cout << "Cure Destructor Called." << std::endl;
}
Cure::Cure(const Cure& autre):type("cure")
{
	std::cout << "Cure Copy Constructor Called." << std::endl;
		*this = autre;
}
Cure& Cure::operator=(const Cure &autre)
{
	std::cout << "Cure = operator Called." << std::endl;
	if (this != &autre)
		this->type = autre.type;
	return (*this);
}

AMateria* Cure::clone() const
{
	Cure *cloneCure = new Cure();
	*cloneCure = *this;
	return (cloneCure);
}
void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName()  << "'s wounds *"<< std::endl;
}
