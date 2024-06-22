/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero < tfiguero@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 21:08:55 by tfiguero          #+#    #+#             */
/*   Updated: 2024/06/22 20:18:52 by tfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Basic animal constructor called" << std::endl;
    _type = "Random";
}

Animal::Animal(const Animal &old)
{
    *this = old;
    std::cout << "Animal copy constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& old)
{
    this->_type = old._type;
    return(*this);
}
Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound() const
{
    std::cout << " * RANDOM NOISES * " << std::endl;
}

std::string Animal::getType() const
{
    return(_type);
}