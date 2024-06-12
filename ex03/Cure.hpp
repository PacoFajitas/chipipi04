/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero < tfiguero@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 13:34:33 by tfiguero          #+#    #+#             */
/*   Updated: 2024/06/11 19:25:39 by tfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
    Cure();
    ~Cure();
    Cure(const Cure& old);
    Cure& operator=(const Cure& old);
    AMateria* clone() const;
    void use(ICharacter& target) const;

};
#endif