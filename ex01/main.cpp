/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero < tfiguero@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 15:16:48 by tfiguero          #+#    #+#             */
/*   Updated: 2024/06/22 20:17:31 by tfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    Animal* meta = new Animal();
    Dog* j = new Dog();
    Animal* i = new Cat();
    WrongAnimal* k = new WrongCat();
    Dog* tusMuertosPisaos = new Dog();

    std::cout << "Antes del igual \n";
    *tusMuertosPisaos = *j;
    std::cout << "Despues del igual \n";
    std::cout << tusMuertosPisaos->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << k->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    k->makeSound();
    meta->makeSound();
    delete meta;
    delete j;
    delete i;
    delete k;
    delete tusMuertosPisaos;
    return 0;
}