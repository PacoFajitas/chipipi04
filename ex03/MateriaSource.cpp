/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero < tfiguero@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 14:45:11 by tfiguero          #+#    #+#             */
/*   Updated: 2024/06/16 18:28:04 by tfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "Standard constructo called for MateriaSource" << std::endl;
	std::cout << std::endl;
	for (int i = 0; i < 4; i++)
		this->_slots[i] = NULL;
}
MateriaSource::MateriaSource(const MateriaSource& old)
{
	std::cout << "Copy constructor called for MateriaSource" << std::endl;
	std::cout << std::endl;
	*this = old;
}
MateriaSource& MateriaSource::operator=(const MateriaSource& old)
{
	std::cout << "Copy operator overload called" << std::endl;
	std::cout << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (old._slots[i] != NULL)
			this->_slots[i] = old._slots[i]->clone();
		else
			this->_slots[i] = NULL;
	}
	return(*this);
}
MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_slots[i] != NULL)
			delete this->_slots[i];
	}
	// delete this->_slots;
}
void MateriaSource::learnMateria(AMateria*m)
{
	if(!m || m->getType() == "Undefined")
	{
		std::cout << "Cannot learn an undefined materia" << std::endl;
	std::cout << std::endl;
		return ; 
	}
	for (int i = 0; i < 4; i++)
	{
		if (this->_slots[i] == NULL)
		{
			this->_slots[i] = m;
			std::cout << "Saved a " << m->getType() << " in the slot " << i << std::endl;
	std::cout << std::endl;
			return ;
		}
	}
	std::cout << "Couldn't save the materia, materia library is full" << std::endl;
	std::cout << std::endl;
}
AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_slots[i]!= NULL && this->_slots[i]->getType().compare(type) && type != "Undefined")
		{
			std::cout << "Created a materia with type " << type << std::endl;
			return(this->_slots[i]->clone());
		}
	}
	std::cout << "Could not find a matching Materia in the library of materias learned." << std::endl;
	std::cout << std::endl;
	return(0);
}

void MateriaSource::printMaterias()
{
	for(int i = 0; i < 4; i++)
	{
		if (this->_slots[i] != NULL)
			std::cout << "Materia saved on slot " << i << " is from type " << this->_slots[i]->getType() << std::endl;
		else
			std::cout << "No materia saved on slot " << i << std::endl;
	}
	std::cout << std::endl;
}