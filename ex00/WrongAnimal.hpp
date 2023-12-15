/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <cqin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 20:32:34 by christine         #+#    #+#             */
/*   Updated: 2023/12/15 16:47:50 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	public :
		WrongAnimal();
		virtual ~WrongAnimal();

		WrongAnimal(const WrongAnimal &autre);
		WrongAnimal& operator=(const WrongAnimal &autre);

		std::string getType() const;
		void makeSound() const;

	protected :
		std::string type;
};

#endif
