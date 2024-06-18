/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero < tfiguero@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 19:50:02 by tfiguero          #+#    #+#             */
/*   Updated: 2024/06/17 20:06:14 by tfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "Basic WrongCat constructor called" << std::endl;
    _type = "WrongCat";
}

WrongCat::WrongCat(WrongCat &old)
{
    *this = old;
    std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat& WrongCat::operator=(WrongCat& old)
{
    this->_type = old._type;
    return(*this);
}
WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}
void WrongCat::makeSound() const
{
    std::cout << " Meow Meow " << std::endl;
}