/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christine <christine@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 21:26:34 by christine         #+#    #+#             */
/*   Updated: 2023/12/09 22:38:01 by christine        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = "idea";
	}
	std::cout << " * Brain Default Constructor called." << std::endl;
}
Brain::~Brain()
{
	std::cout << " * Brain Destructor called." << std::endl;
}

Brain::Brain(const Brain& autre)
{
	std::cout << " * Brain Copy Constructor called." << std::endl;
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = autre.ideas[i];
	}
}
Brain& Brain::operator=(const Brain& autre)
{
	std::cout << " * Brain operator of = called." << std::endl;
	if (this != &autre)
	{
		for (int i = 0; i < 100; i++)
		{
			this->ideas[i] = autre.ideas[i];
		}
	}
	return (*this);
}

std::string Brain::getIdea(int pos) const
{
	if (pos >= 0 && pos < 100)
		return (this->ideas[pos]);
	return NULL;
}

void Brain::setIdea(std::string idea, int pos)
{
	if (pos >= 0 && pos < 100)
	this->ideas[pos] = idea;
}
