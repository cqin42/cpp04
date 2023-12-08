/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <cqin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 18:13:11 by cqin              #+#    #+#             */
/*   Updated: 2023/12/08 15:01:51 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog():Animal("Dog")
{
	std::cout << "Dog Default Constructor called." << std::endl;
}
Dog::~Dog()
{
	std::cout << "Dog Destructor called." << std::endl;
}
Dog::Dog(const Dog &autre)
{
	std::cout << "Dog Copy Constructor called." << std::endl;
}
Dog Dog::operator=(const Dog &autre)
{
	std::cout << "Dog operator assignation called." << std::endl;
}
