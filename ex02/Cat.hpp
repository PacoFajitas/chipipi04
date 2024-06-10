/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero < tfiguero@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 21:09:31 by tfiguero          #+#    #+#             */
/*   Updated: 2024/06/09 21:42:23 by tfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"

class Cat : public AAnimal
{
    private:
        Brain* _brain;
    public:
        Cat();
        Cat(Cat& old);
        Cat& operator=(Cat& old);
        ~Cat();
        void makeSound(void) const;
};
#endif