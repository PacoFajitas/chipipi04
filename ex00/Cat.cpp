/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero < tfiguero@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 21:09:35 by tfiguero          #+#    #+#             */
/*   Updated: 2024/06/17 20:05:04 by tfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Basic cat constructor called" << std::endl;
    _type = "Cat";
}

Cat::Cat(Cat &old)
{
    *this = old;
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=(Cat& old)
{
    this->_type = old._type;
    return(*this);
}
Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}
void Cat::makeSound() const
{
    std::cout << " Meow Meow " << std::endl;
}