/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero < tfiguero@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 21:08:41 by tfiguero          #+#    #+#             */
/*   Updated: 2024/06/22 20:19:06 by tfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "iostream"

class Animal
{
    protected:
        std::string _type;
    public:
        Animal();
        Animal(const Animal& old);
        Animal& operator=(const Animal& old);
        virtual ~Animal();
        std::string getType() const;
        virtual void makeSound() const;
};
#endif