/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero < tfiguero@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 21:08:55 by tfiguero          #+#    #+#             */
/*   Updated: 2024/06/09 21:38:48 by tfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
    std::cout << "Basic AAnimal constructor called" << std::endl;
    _type = "Random";
}

AAnimal::AAnimal(AAnimal &old)
{
    *this = old;
    std::cout << "Copy constructor called" << std::endl;
}

AAnimal& AAnimal::operator=(AAnimal& old)
{
    this->_type = old._type;
    return(*this);
}
AAnimal::~AAnimal()
{
    std::cout << "Destructor called" << std::endl;
}

std::string AAnimal::getType() const
{
    return(_type);
}