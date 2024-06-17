/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero < tfiguero@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 14:45:02 by tfiguero          #+#    #+#             */
/*   Updated: 2024/06/16 16:55:27 by tfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria* _slots[4];
	public:
		MateriaSource();
		MateriaSource(const MateriaSource& old);
		MateriaSource& operator=(const MateriaSource& old);
		~MateriaSource();
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
		void printMaterias();
};

#endif