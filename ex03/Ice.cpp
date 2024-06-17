/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero < tfiguero@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 13:33:26 by tfiguero          #+#    #+#             */
/*   Updated: 2024/06/16 17:03:38 by tfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
	_type = "Ice";
	std::cout << "Ice constructor called" << std::endl<< std::endl;
}
Ice::~Ice()
{
	std::cout << "Ice destrucctor called" << std::endl<< std::endl;
}
Ice::Ice(const Ice& old)
{
	std::cout << "Copy constructor called" << std::endl<< std::endl;
	*this = old;
}
Ice& Ice::operator=(const Ice& old)
{
	std::cout << "Copy assignment operator called"<< std::endl<< std::endl;
	this->_type = old._type;
	return(*this);
}
AMateria* Ice::clone() const
{
	std::cout << "You cloned some Ice" << std::endl<< std::endl;
	return(new Ice());
}
void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}