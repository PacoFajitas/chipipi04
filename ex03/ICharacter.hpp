/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero < tfiguero@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 23:05:22 by tfiguero          #+#    #+#             */
/*   Updated: 2024/06/16 16:25:27 by tfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP


#include "iostream"
#include "AMateria.hpp"

class AMateria;
class ICharacter
{
    public:
        virtual ~ICharacter(){}
        virtual std::string const & getName() const = 0;
        virtual void equip(AMateria* m) = 0;
        virtual void unequip(int idx) = 0;
        virtual void use(int idx, ICharacter& target) = 0;
        virtual void printMaterias() = 0;
};
#endif