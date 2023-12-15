/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <cqin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 18:19:13 by cqin              #+#    #+#             */
/*   Updated: 2023/12/15 19:21:26 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character():_name("No name"), _floorSize(0)
{
	std::cout << "Character Constructor Called." << std::endl;
	for (int i = 0; i < 4; i++)
		this->Inventory[i] = NULL;
}
Character::~Character()
{
	std::cout << "Character Destructor Called." << std::endl;
	for (int i = 0; i < 4; i++)
		delete this->Inventory[i];
	for (int i = 0; i < this->_floorSize; i++)
	{
		delete this->Floor[i];
		if (i + 1 == this->_floorSize)
			delete[] this->Floor;
	}
}
Character::Character(std::string name):_name(name), _floorSize(0)
{
	std::cout << "Character with parameter Constructor Called." << std::endl;
	for (int i = 0; i < 4; i++)
		this->Inventory[i] = NULL;
}
Character::Character(const Character& autre)
{
	std::cout << "Character Copy Constructor Called." << std::endl;
	for (int i = 0; i < 4; i++)
		this->Inventory[i] = NULL;
	*this = autre;
}
Character& Character::operator=(const Character& autre)
{
	std::cout << "Character = operator Called." << std::endl;
	if (this != &autre)
	{
		this->_name = autre._name;
		for (int i = 0; i < 4; i++)
			delete this->Inventory[i];
		for (int i = 0; i < 4; i++)
			this->Inventory[i] = NULL;
	}
	for (int i = 0; i < 4; i++)
	{
		if (autre.Inventory[i] != NULL)
			this->Inventory[i] = autre.Inventory[i]->clone();
	}
	return (*this);
}

std::string const & Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->Inventory[i] == m)
		{
			std::cout << "already has , cannot equip." << std::endl;
			return ;
		}
		if (this->Inventory[i] == NULL)
		{
			this->Inventory[i] = m;
			return ;
		}
	}
	std::cout << "No place in Inventory !" << std::endl;
}
void Character::unequip(int idx)
{
	if (idx >= 4 || idx < 0)
	{
		std:: cout << "Inventory have only 4 idx" << std::endl;
		return ;
	}
	if (this->Inventory[idx] == NULL)
	{
		std:: cout << "Inventory at idx = " << idx << " are empty, cannot unequip." << std::endl;
		return ;
	}
	if (this->_floorSize == 0)
	{
		this->Floor = new AMateria*[2];
		this->Floor[0] = this->Inventory[idx];
		this->Floor[1] = NULL;
		this->_floorSize++;
	}
	else
	{
		this->_floorSize++;
		AMateria **tmp = new AMateria*[this->_floorSize + 1];
		for (int i = 0; i < this->_floorSize - 1; i++)
			tmp[i] = this->Floor[i];

		tmp[this->_floorSize - 1] =  this->Inventory[idx];
		tmp[this->_floorSize] = NULL;
		delete[] this->Floor;
		this->Floor = tmp;
	}
	this->Inventory[idx] = NULL;
}
void Character::use(int idx, ICharacter& target)
{
	if (idx >= 4 || idx < 0)
	{
		std:: cout << "Inventory have only 4 idx" << std::endl;
		return ;
	}
	if (this->Inventory[idx] == NULL)
	{
		std:: cout << this->_name << " have no materia" << std::endl;
		return ;
	}
	std:: cout << this->_name;
	this->Inventory[idx]->use(target);
}
