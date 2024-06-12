/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero < tfiguero@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 17:42:51 by tfiguero          #+#    #+#             */
/*   Updated: 2024/06/12 21:59:46 by tfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		int			_countTrash ;
		std::string _name;
		AMateria	*_inventory[4];
		AMateria	*_discarded;
	public:
		Character();
		Character(std::string name);
		Character(const Character&old);
		Character& operator=(const Character& old);
		~Character();
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
		void addTrash(AMateria* trash);
		AMateria* copyTrash() const;
};
#endif