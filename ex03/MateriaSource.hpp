/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <cqin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Createdl AMateria* clone() const = 0;
		virtual void us: 2023/12/12 16:26:41 by cqin              #+#    #+#             */
/*   Updated: 2023/12/13 18:55:45 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class AMateria;

class MateriaSource : public IMateriaSource
{
	public :
		MateriaSource();
		virtual ~MateriaSource();
		MateriaSource(const MateriaSource& autre);
		MateriaSource &operator=(const MateriaSource& autre);

		void		learnMateria(AMateria *m);
		AMateria *	createMateria(std::string const & type);

	private :
		AMateria *Materia[4];
};

#endif
