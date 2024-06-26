/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero < tfiguero@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 17:42:43 by tfiguero          #+#    #+#             */
/*   Updated: 2024/06/16 18:28:45 by tfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	_name = "paco";
	std::cout << "Default character constructor called, name of character will be"<<_name << std::endl;
	std::cout << std::endl;
	_discarded = NULL;
	_countTrash = 1;
	for(int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	this->_discarded = new AMateria*[_countTrash];
	this->_discarded[0] = NULL;
	
}
Character::Character(std::string name)
{
	_name = name;
	_discarded = NULL;
	_countTrash = 1;
	for(int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	this->_discarded = new AMateria*[_countTrash];
	this->_discarded[0] = NULL;
	std::cout << "Character constructor with name: " << _name << "called" << std::endl;
	std::cout << std::endl;
}
Character::Character(const Character&old)
{
	std::cout << "Copy character constructor called" << std::endl;
	std::cout << std::endl;
	_countTrash = 1;
	for(int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	this->_discarded = new AMateria*[_countTrash];
	this->_discarded[0] = NULL;
	*this = old;
}
Character& Character::operator=(const Character& old)
{
	std::cout << "Copy assignment operator called for character" << std::endl;
	std::cout << std::endl;
	this->_name = old._name;
	for(int i = 0; i < 4; i++)
	{
		if(this->_inventory[i] != NULL)
			delete this->_inventory[i];
	}
	for(int i = 0; i < 4; i++)
	{
		if (old._inventory[i] != NULL)
			this->_inventory[i] = old._inventory[i]->clone();
		else
			this->_inventory[i] = NULL;		
	}
/*	for (int i = 0; i < _countTrash - 1; i++)
		delete this->_discarded[i];
	delete [] this->_discarded;
	this->_countTrash = old._countTrash;*/
	/*_discarded = new AMateria*[_countTrash];
	for (int i = 0; i < _countTrash - 1; i++)
	{
		if (old._discarded[i] != NULL)
		{
			this->addTrash(old._discarded[i]->clone());
		}
		
	}*/
	return(*this);
}
Character::~Character()
{
	for(int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] != NULL)
			delete _inventory[i];
	}
	for (int i = 0; i < this->_countTrash; i++)
	{
		if (_discarded && _discarded[i] != NULL)
			delete _discarded[i];		
	}
	delete [] _discarded;
}
	
std::string const & Character::getName() const
{
	return(this->_name);
}
void Character::equip(AMateria* m)
{
	if(m == NULL)
	{
		std::cout << "Can't equipo a null materia jiji" << std::endl;
		std::cout << std::endl;
		return ;
	}
	for(int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m->clone();
			std::cout << "Materia equiped on slot " << i << " with type: " << this->_inventory[i]->getType() << std::endl;
	std::cout << std::endl;
			break;
		}
		// else
			// std::cout <<"inventory is not null jiji kms" << std::endl; 
	}
}
void Character::unequip(int idx)
{
	if (idx > 3)
		return ;	
	if(this->_inventory[idx] != NULL)
	{
		this->addTrash(this->_inventory[idx]);
		this->_inventory[idx] = NULL;
	}
}
void Character::use(int idx, ICharacter& target)
{
	if (idx > 4 || idx < 0)
	{
		std::cout << "Invalid index identifier" << std::endl;
	std::cout << std::endl;
		return ;
	}
	if(this->_inventory[idx] != NULL)
		this->_inventory[idx]->use(target);
}
void Character::addTrash(AMateria* trash)
{
	if (trash == NULL)
		return ;	
	this->_discarded[_countTrash - 1] = trash;
	_countTrash += 1;
	AMateria **newTrash = new AMateria *[_countTrash];
	for (int i = 0; i < _countTrash - 1; i++)
	{
		newTrash[i] = this->_discarded[i];
	}
	delete []_discarded;
	newTrash[_countTrash - 1] = NULL;
	this->_discarded = newTrash;
}

void Character::printMaterias()
{
	std::cout << this->getName() <<  std::endl << std::endl;
	for(int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] != NULL)
			std::cout << "Materia equiped on slot " << i << " with type: " << this->_inventory[i]->getType() << std::endl;
		else
			std::cout <<"inventory is null jiji kms" << std::endl; 
	}
	std::cout << std::endl;
}
