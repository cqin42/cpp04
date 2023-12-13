/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <cqin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 16:26:41 by cqin              #+#    #+#             */
/*   Updated: 2023/12/12 16:32:03 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	public :
		MateriaSource();
		~MateriaSource();
		MateriaSource(const MateriaSource& autre);
		MateriaSource& operator=(const MateriaSource& autre);
		void learnMateria(AMateria *m);
		AMateria* createMateria(std::string const &type);
}

#endif
