/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <cqin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 18:13:00 by cqin              #+#    #+#             */
/*   Updated: 2023/12/08 14:34:45 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	public :
		Animal();
		~Animal();

		Animal(const Animal &autre);
		Animal operator=(const Animal &autre);

		std::string getType();
		void makeSound();

	protected :
		std::string type;
};

#endif
