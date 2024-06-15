/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero < tfiguero@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 22:59:15 by tfiguero          #+#    #+#             */
/*   Updated: 2024/06/15 21:33:07 by tfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.hpp"

int main()
{
IMateriaSource* src = new MateriaSource();
src->learnMateria(new Ice());
src->learnMateria(new Cure());
ICharacter* me = new Character("me");
AMateria* tmp;
tmp = src->createMateria("Ice");
me->equip(tmp);
tmp = src->createMateria("Cure");
me->equip(tmp);
ICharacter* bob = new Character("bob");
ICharacter* a = me;
me->use(0, *bob);
me->use(1, *bob);
me->unequip(0);
me->unequip(1);
me->unequip(2);
me->unequip(3);
me->unequip(4);
a->use(0, *me);
delete bob;
delete me;
delete src;
return 0;
}