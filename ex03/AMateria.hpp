/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero < tfiguero@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 22:59:46 by tfiguero          #+#    #+#             */
/*   Updated: 2024/06/11 19:26:00 by tfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "iostream"
#include "ICharacter.hpp"

class AMateria
{   
    protected:
        std::string _type;
    public:
        AMateria();
        AMateria(std::string const & type);
        std::string const & getType() const; //Returns the materia type
        AMateria& operator=(const AMateria& old);
        virtual ~AMateria();
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif