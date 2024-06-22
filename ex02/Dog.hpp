/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero < tfiguero@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 21:09:42 by tfiguero          #+#    #+#             */
/*   Updated: 2024/06/22 20:25:10 by tfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"

class Dog : public AAnimal
{
    private:
        Brain* _brain;
    public:
        Dog();
        Dog(const Dog& old);
        Dog& operator=(const Dog& old);
        void makeSound(void) const;
        ~Dog();
};
#endif