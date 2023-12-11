/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christine <christine@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:06:53 by christine         #+#    #+#             */
/*   Updated: 2023/12/11 14:10:40 by christine        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
	public :
		MateriaSource();
		~MateriaSource();
		MateriaSource(const MateriaSource& autre);
		MateriaSource &operator=(const MateriaSource& autre);

		void		learnMateria(AMateria * m);
		AMateria *	createMateria(std::string const & type);

	private :
		AMateria *Materia[4];
};

#endif

