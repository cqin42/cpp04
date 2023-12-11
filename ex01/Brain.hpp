/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christine <christine@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 21:23:01 by christine         #+#    #+#             */
/*   Updated: 2023/12/09 22:37:54 by christine        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
	public :
		Brain();
		~Brain();

		Brain(const Brain& autre);
		Brain& operator=(const Brain& autre);
		std::string ideas[100];

		std::string getIdea(int pos) const;
		void setIdea(std::string idea, int pos);

};

#endif
