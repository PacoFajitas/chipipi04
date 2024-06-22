/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero < tfiguero@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 19:50:02 by tfiguero          #+#    #+#             */
/*   Updated: 2024/06/22 20:23:09 by tfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "Basic constructor called" << std::endl;
    _type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &old)
{
    *this = old;
    std::cout << "Copy constructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& old)
{
    this->_type = old._type;
    return(*this);
}
WrongCat::~WrongCat()
{
    std::cout << "Destructor called" << std::endl;
}
void WrongCat::makeSound() const
{
    std::cout << " Meow Meow " << std::endl;
}