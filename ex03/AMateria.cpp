/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero < tfiguero@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 22:59:38 by tfiguero          #+#    #+#             */
/*   Updated: 2024/06/10 13:41:54 by tfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() 
{
    std::cout << "Basic Materia constructor called" << std::endl;
    _type = "Undefined";
}

AMateria::AMateria(std::string const & type )
{
    std::cout << "Materia constructor called with type: " << type << std::endl;
    _type = type;
}
AMateria::~AMateria()
{
    std::cout << "Materia destructor called " << std::endl;
}

AMateria& AMateria::operator=(const AMateria& old)
{
    
}
void AMateria::use(ICharacter& target)
{
    std::cout << "Undefined materia is trying to do something to " << target.getName();
}

const std::string &AMateria::getType() const
{
    return(this->_type);
}

AMateria::~AMateria()
{
    std::cout << "Materia destructor called " << std::endl;
}