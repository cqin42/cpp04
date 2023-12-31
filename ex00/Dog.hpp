/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christine <christine@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 18:13:14 by cqin              #+#    #+#             */
/*   Updated: 2023/12/09 20:03:43 by christine        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal
{
	public :
		Dog();
		~Dog();

		Dog(const Dog &autre);
		Dog operator=(const Dog &autre);
		void makeSound() const;

};

#endif
