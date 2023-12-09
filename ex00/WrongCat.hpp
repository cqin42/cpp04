/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christine <christine@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 20:37:15 by christine         #+#    #+#             */
/*   Updated: 2023/12/09 20:46:01 by christine        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	public :
		WrongCat();
		~WrongCat();

		WrongCat(const WrongCat &autre);
		WrongCat& operator=(const WrongCat &autre);

		std::string getType() const;
		void makeSound() const;

};

#endif
