/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero < tfiguero@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 13:34:20 by tfiguero          #+#    #+#             */
/*   Updated: 2024/06/11 19:24:50 by tfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
	std::cout << "Cure basic constructor called" << std::endl;
}
Cure::~Cure()
{
	std::cout << "Cure destructor called" << std::endl;
}
Cure::Cure(const Cure& old)
{
	std::cout << "Cure reference constructor called" << std::endl;
	*this = old;
}
Cure& Cure::operator=(const Cure& old)
{
	this->_type = old._type;
}
AMateria* Cure::clone() const
{
	Cure *ret = new Cure();
	std::cout << "You cloned a Cure" << std::endl;
	return(ret);
}
void Cure::use(ICharacter& target) const
{
	std::cout <<  "* Cure " << target.getName() << "'s wounds";
}