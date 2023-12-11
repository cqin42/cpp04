/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <cqin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 18:13:09 by cqin              #+#    #+#             */
/*   Updated: 2023/12/11 15:40:43 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat: public AAnimal
{
	public :
		Cat();
		~Cat();

		Cat(const Cat &autre);
		Cat operator=(const Cat &autre);
		void makeSound() const;
		std::string getIdea(int pos) const;
		void setIdea(std::string idea, int pos);

	private :
		Brain *_brain;
};

#endif
