/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <cqin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 15:59:59 by cqin              #+#    #+#             */
/*   Updated: 2023/12/11 19:09:57 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria():type("Default")
{
	std:: cout << "AMateria Constructor Called without parameter." << std::endl;
}

AMateria::AMateria(std::string const &type):type(type)
{
	std:: cout << "AMateria Constructor Called." << std::endl;
}
AMateria::~AMateria()
{
	std:: cout << "AMateria Destructor Called." << std::endl;
}

AMateria::AMateria(const AMateria& autre)
{
	std:: cout << "AMateria Constructor Called." << std::endl;
	*this = autre;
}
AMateria::AMateria& operator=(const AMateria& autre)
{
	std:: cout << "AMateria = operator Called." << std::endl;
	if (this != &autre)
		this->type = autre.type;
	return (*this);
}

std::string const & AMateria::getType() const
{
	return (this->type);
}

