/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero < tfiguero@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 13:34:01 by tfiguero          #+#    #+#             */
/*   Updated: 2024/06/10 13:41:47 by tfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP
#include "AMateria.hpp"
class Ice : public AMateria
{
    Ice();
    ~Ice();
    Ice(const Ice& old);
    Ice& operator=(const Ice& old);
    AMateria* clone() const;
    void use(ICharacter& target);

};
#endif