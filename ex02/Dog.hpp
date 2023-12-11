/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <cqin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 18:13:14 by cqin              #+#    #+#             */
/*   Updated: 2023/12/11 15:40:18 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog: public AAnimal
{
	public :
		Dog();
		~Dog();

		Dog(const Dog &autre);
		Dog operator=(const Dog &autre);
		void makeSound() const;

	private :
		Brain* _brain;
};

#endif
