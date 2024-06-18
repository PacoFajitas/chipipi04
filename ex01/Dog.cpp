/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero < tfiguero@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 21:09:39 by tfiguero          #+#    #+#             */
/*   Updated: 2024/06/18 00:23:19 by tfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Basic dog constructor called" << std::endl;
    _type = "Dog";
    _brain = new Brain();
}

Dog::Dog(Dog &old)
{
    *this = old;
    std::cout << "Copy dog constructor called" << std::endl;
}

Dog& Dog::operator=(Dog& old)
{
    std::cout << "new brain: " << &_brain << std::endl;
    std::cout << "new brain: " << &old._brain << std::endl;
    delete _brain;
    this->_type = old._type;
    this->_brain = new Brain(*old._brain);
    return(*this);
}
Dog::~Dog()
{
    delete _brain;
    std::cout << "Destructor dog called" << std::endl;
}
void Dog::makeSound() const
{
    std::cout <<" Woof Woof " << std::endl;
}