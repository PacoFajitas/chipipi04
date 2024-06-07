/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero < tfiguero@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 21:09:39 by tfiguero          #+#    #+#             */
/*   Updated: 2024/06/07 19:55:41 by tfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Basic constructor called" << std::endl;
    _type = "Dog";
}

Dog::Dog(Dog &old)
{
    *this = old;
    std::cout << "Copy constructor called" << std::endl;
}

Dog& Dog::operator=(Dog& old)
{
    this->_type = old._type;
    return(*this);
}
Dog::~Dog()
{
    std::cout << "Destructor called" << std::endl;
}
void Dog::makeSound() const
{
    std::cout <<" Woof Woof " << std::endl;
}