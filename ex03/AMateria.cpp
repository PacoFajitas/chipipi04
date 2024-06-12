/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero < tfiguero@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 22:59:38 by tfiguero          #+#    #+#             */
/*   Updated: 2024/06/11 19:26:05 by tfiguero         ###   ########.fr       */
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
    (void)target;
}

const std::string &AMateria::getType() const
{
    return(this->_type);
}

AMateria::~AMateria()
{
    std::cout << "Materia destructor called " << std::endl;
}