/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero < tfiguero@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 13:34:20 by tfiguero          #+#    #+#             */
/*   Updated: 2024/06/16 17:03:10 by tfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
	_type = "Cure";
	std::cout << "Cure basic constructor called" << std::endl<< std::endl;
}
Cure::~Cure()
{
	std::cout << "Cure destructor called" << std::endl<< std::endl;
}
Cure::Cure(const Cure& old)
{
	std::cout << "Cure reference constructor called" << std::endl<< std::endl;
	*this = old;
}
Cure& Cure::operator=(const Cure& old)
{
	this->_type = old._type;
	return(*this);
}
AMateria* Cure::clone() const
{
	Cure *ret = new Cure();
	std::cout << "You cloned a Cure" << std::endl<< std::endl;
	return(ret);
}
void Cure::use(ICharacter& target)
{
	std::cout <<  "* Cure " << target.getName() << "'s wounds"<< std::endl<< std::endl;
}