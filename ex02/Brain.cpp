/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero < tfiguero@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 19:11:59 by tfiguero          #+#    #+#             */
/*   Updated: 2024/06/09 21:12:06 by tfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
        std::cout << "Basic brain constructor called" << std::endl;
}

Brain::Brain(const Brain& old)
{
    *this = old;
}
Brain& Brain::operator=(const Brain& old)
{
    
    for(int i = 0; i<100; i++)
        _ideas[i] = old._ideas[i];
    return(*this);
}
Brain::~Brain(){};