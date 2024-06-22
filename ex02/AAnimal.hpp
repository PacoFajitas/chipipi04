/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero < tfiguero@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 21:08:41 by tfiguero          #+#    #+#             */
/*   Updated: 2024/06/09 21:38:32 by tfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAnimal_HPP
#define AAnimal_HPP

#include "Brain.hpp"
#include "iostream"

class AAnimal
{
    protected:
        std::string _type;
    public:
        AAnimal();
        AAnimal(const AAnimal& old);
        AAnimal& operator=(const AAnimal& old);
        virtual ~AAnimal();
        std::string getType() const;
        virtual void makeSound() const = 0;
};
#endif