/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero < tfiguero@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 19:47:00 by tfiguero          #+#    #+#             */
/*   Updated: 2024/06/22 20:22:53 by tfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "Basic constructor called" << std::endl;
    _type = "Random";
}

WrongAnimal::WrongAnimal(const WrongAnimal &old)
{
    *this = old;
    std::cout << "Copy constructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& old)
{
    this->_type = old._type;
    return(*this);
}
WrongAnimal::~WrongAnimal()
{
    std::cout << "Destructor called" << std::endl;
}

void WrongAnimal::makeSound() const
{
    std::cout << " * RANDOM NOISES * " << std::endl;
}

std::string WrongAnimal::getType() const
{
    return(_type);
}