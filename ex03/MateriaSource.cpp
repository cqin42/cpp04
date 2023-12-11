/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christine <christine@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:29:46 by christine         #+#    #+#             */
/*   Updated: 2023/12/11 14:45:46 by christine        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource default Constructor Called." << std::endl;
	for (int i = 0; i < 4; i++)
		this->Materia[i] = NULL;
}
MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource Destructor Called." << std::endl;
	for (int i = 0; i < 4; i++)
		delete this->Materia[i];
}
MateriaSource::MateriaSource(const MateriaSource& autre)
{
	std::cout << "MateriaSource Copy Constructor Called." << std::endl;
	for (int i = 0; i < 4; i++)
		this->Materia[i] = NULL;
	*this = autre;
}
MateriaSource &MateriaSource::operator=(const MateriaSource& autre)
{
	std::cout << "MateriaSource = Operator Called." << std::endl;
	for (int i = 0; i < 4; i++)
		delete this->Materia[i];
	for (int i = 0; i < 4; i++)
		this->Materia[i] = autre.Materia[i]->clone();
	return (*this);
}

void		MateriaSource::learnMateria(AMateria * m)
{
	if (!m)
	{
		std::cout << "no materia to learn." << std::endl;
		return ;
	}
	for (int i = 0; i < 4; i++)
	{
		if (this->Materia[i] == NULL)
		{
			this->Materia[i] = m;
			std::cout << "Learn the " << m->getType() << std::endl;
			return ;
		}
	}
	std::cout << "cannot learn new materia" << std::endl;
	delete m;
}
AMateria *	MateriaSource::createMateria(std::string const & type)
{
	for(int i = 0; i < 4; i++)
	{
		if (Materia[i] && Materia[i]->getType() == type)
			return (Materia[i]->clone());
	}
	std::cout << "cannot learn , because Materia don't exist" << std::endl;
	return NULL;
}
