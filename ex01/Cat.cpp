/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero < tfiguero@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 21:09:35 by tfiguero          #+#    #+#             */
/*   Updated: 2024/06/09 21:34:08 by tfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Basic cat constructor called" << std::endl;
    _type = "Cat";
    _brain = new Brain();
}

Cat::Cat(Cat &old)
{
    *this = old;
    std::cout << "Copy cat constructor called" << std::endl;
}

Cat& Cat::operator=(Cat& old)
{
    this->_type = old._type;
    if (old._brain == NULL)
        _brain = new Brain();
    else    
        this->_brain = new Brain(*old._brain);
    return(*this);
}
Cat::~Cat()
{
    delete _brain;
    std::cout << "Destructor cat called" << std::endl;
}
void Cat::makeSound() const
{
    std::cout << " Meow Meow " << std::endl;
}