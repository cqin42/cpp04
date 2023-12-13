/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <cqin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 16:31:41 by cqin              #+#    #+#             */
/*   Updated: 2023/12/12 16:43:31 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource Constructor Called." << std::endl;
}
MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource Destructor Called." << std::endl;
}
MateriaSource::MateriaSource(const MateriaSource& autre)
{
	std::cout << "MateriaSource Copy Constructor Called." << std::endl;
}
MateriaSource& MateriaSource::operator=(const MateriaSource& autre)
{
	std::cout << "MateriaSource = operator Constructor Called." << std::endl;
}

void MateriaSource::learnMateria(AMateria *m)
{
}
AMateria* MateriaSource::createMateria(std::string const &type)
{
}
