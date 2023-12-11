/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christine <christine@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 18:19:11 by cqin              #+#    #+#             */
/*   Updated: 2023/12/11 12:47:31 by christine        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice: public AMateria
{
	public :
		Ice();
		~Ice();
		Ice(const Ice& autre);
		Ice& operator=(const Ice &autre);

		AMateria* clone() const;
		void use(ICharacter& target);

	private :
		std::string type;
};

#endif
