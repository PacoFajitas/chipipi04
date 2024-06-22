/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero < tfiguero@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 21:09:39 by tfiguero          #+#    #+#             */
/*   Updated: 2024/06/22 20:25:03 by tfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Basic dog constructor called" << std::endl;
    _type = "Dog";
    _brain = new Brain();
}

Dog::Dog(const Dog &old)
{
    *this = old;
    std::cout << "Copy dog constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& old)
{
    this->_type = old._type;
    if (old._brain == NULL)
        _brain = new Brain();
    else    
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