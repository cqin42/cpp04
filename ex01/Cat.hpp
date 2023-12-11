/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christine <christine@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 18:13:09 by cqin              #+#    #+#             */
/*   Updated: 2023/12/09 22:36:56 by christine        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
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
