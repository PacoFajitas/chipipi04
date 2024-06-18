/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero < tfiguero@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 19:47:00 by tfiguero          #+#    #+#             */
/*   Updated: 2024/06/17 20:05:52 by tfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "Basic WrongAnimal constructor called" << std::endl;
    _type = "Random";
}

WrongAnimal::WrongAnimal(WrongAnimal &old)
{
    *this = old;
    std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal& old)
{
    this->_type = old._type;
    return(*this);
}
WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

void WrongAnimal::makeSound() const
{
    std::cout << " * RANDOM NOISES * " << std::endl;
}

std::string WrongAnimal::getType() const
{
    return(_type);
}