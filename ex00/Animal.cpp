/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero < tfiguero@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 21:08:55 by tfiguero          #+#    #+#             */
/*   Updated: 2024/06/05 21:28:07 by tfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Basic constructor called" << std::endl;
}

Animal::Animal(Animal &old)
{
    *this = old;
    std::cout << "Copy constructor called" << std::endl;
}

Animal& Animal::operator=(Animal& old)
{
    this->_type = old._type;
}