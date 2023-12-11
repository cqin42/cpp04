/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <cqin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 18:13:00 by cqin              #+#    #+#             */
/*   Updated: 2023/12/11 15:47:01 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class AAnimal
{
	public :
		AAnimal();
		virtual ~AAnimal();

		AAnimal(const AAnimal &autre);
		AAnimal& operator=(const AAnimal &autre);

		std::string getType() const;
		virtual void makeSound() const = 0;

	protected :
		std::string type;
};

#endif
