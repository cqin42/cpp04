/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <cqin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:47:44 by christine         #+#    #+#             */
/*   Updated: 2023/12/15 14:19:40 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"


class Character: public ICharacter
{
	public:
		Character();
		~Character();
		Character(std::string name);
		Character(const Character& autre);
		Character &operator=(const Character& autre);
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
	private :
		std::string _name;
		AMateria* Inventory[4];
		AMateria** Floor;
		int	_floorSize;
};

#endif
