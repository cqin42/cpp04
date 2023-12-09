/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christine <christine@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 18:13:00 by cqin              #+#    #+#             */
/*   Updated: 2023/12/09 18:58:10 by christine        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	public :
		Animal();
		virtual ~Animal();

		Animal(const Animal &autre);
		Animal& operator=(const Animal &autre);

		std::string getType() const;
		virtual void makeSound() const;

	protected :
		std::string type;
};

#endif
