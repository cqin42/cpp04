/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <cqin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 18:19:05 by cqin              #+#    #+#             */
/*   Updated: 2023/12/13 18:53:50 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure: public AMateria
{
	public :
		Cure();
		~Cure();
		Cure(const Cure& autre);
		Cure& operator=(const Cure &autre);

		AMateria* clone() const;
		void use(ICharacter& target);

	private :
		std::string type;
};

#endif
