/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christine <christine@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 18:19:13 by cqin              #+#    #+#             */
/*   Updated: 2023/12/11 13:20:23 by christine        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character():_name("No name")
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
}
Character::Character(std::string name):_name(name)
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
}
void Character::unequip(int idx)
{
}
void Character::use(int idx, ICharacter& target)
{
}
