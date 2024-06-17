#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include <iostream>

// int main()
// {
// 	IMateriaSource* src = new MateriaSource();
// 	src->learnMateria(new Ice());
// 	src->learnMateria(new Cure());
// 	ICharacter* me = new Character("me");
// 	AMateria* tmp;
// 	tmp = src->createMateria("ice");
// 	me->equip(tmp);
// 	tmp = src->createMateria("cure");
// 	me->equip(tmp);
// 	ICharacter* bob = new Character("bob");
// 	me->use(0, *bob);
// 	me->use(1, *bob);
// 	delete bob;
// 	delete me;
// 	delete src;
// 	return 0;
// }


int main( void )
{
	std::cout << "1. Creating MateriaSource" << std::endl; 
		IMateriaSource* src = new MateriaSource();
		std::cout << std::endl;
		src->printMaterias();
	std::cout << std::endl;

// ------------------------------------------------------------------------------------ //

	std::cout << "2. \"src\" learning 5 materias" << std::endl;
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		
		std::cout << std::endl;
		Ice	*mat = new Ice();
		src->learnMateria(mat);
		delete	mat;

		std::cout << std::endl;
		src->printMaterias();
	std::cout << std::endl;

// ------------------------------------------------------------------------------------ //

	std::cout << "3. Creating Character \"vilma\" and \"oktorok\"" << std::endl;
		Character* vilma = new Character("vilma");
		vilma->printMaterias();
		std::cout << std::endl;

		Character* oktorok = new Character("oktorok");
		oktorok->printMaterias();
	std::cout << std::endl;

// ------------------------------------------------------------------------------------ //

	std::cout << "4. \"vilma\" trying to equip 5 materias and \"oktorok\" one materia" << std::endl;
		vilma->equip(NULL);
		
		AMateria* tmp;
		tmp = src->createMateria("ice");
		vilma->equip(tmp);
	delete tmp;
		tmp = src->createMateria("Ice");
		vilma->equip(tmp);
	delete tmp;
		tmp = src->createMateria("Cure");
		vilma->equip(tmp);
	delete tmp;
		tmp = src->createMateria("Cure");
		vilma->equip(tmp);
	delete tmp;
		tmp = src->createMateria("Ice");
		vilma->equip(tmp);
	delete tmp;

		std::cout << std::endl;
		vilma->printMaterias();

		std::cout << std::endl;
		tmp = src->createMateria("Ice"); //esto lo pongo yo
		oktorok->equip(tmp);
	delete tmp;
	std::cout << std::endl;

// ------------------------------------------------------------------------------------ //

	std::cout << "5. Testing Character Assignation overload \"vilma = oktorok\" for deep copy and changed vilma afterwards" << std::endl;	
		*oktorok = *vilma;
		
		vilma->unequip(0);
		std::cout << "VILMA" << std::endl;
		vilma->printMaterias();
		std::cout << std::endl;

		std::cout << "OKTOROK" << std::endl;
		oktorok->printMaterias();
	std::cout  << std::endl;

// ------------------------------------------------------------------------------------ //

	std::cout << "6. Testing character copy constructor for deep copy \"stardust = Character(vilma)\" and changed vilma afterwards" << std::endl;
		
		vilma->printMaterias();
		Character* stardust = new Character(*vilma);
		stardust->printMaterias();

		tmp = src->createMateria("Ice");
		vilma->equip(tmp);
	delete tmp;
		std::cout << "VILMA" << std::endl;
		vilma->printMaterias();
		std::cout << std::endl;

		std::cout << "STARDUST" << std::endl;
		stardust->printMaterias();


	std::cout << std::endl;

// ------------------------------------------------------------------------------------ //
	
	std::cout << "7. \"vilma\" using all equiped materias on \"oktorok\" " << std::endl;
		vilma->use(0, *oktorok);
		vilma->use(1, *oktorok);
		vilma->use(2, *oktorok);
		vilma->use(3, *oktorok);
		vilma->use(10, *oktorok);
		vilma->use(-1, *oktorok);
	std::cout << std::endl;

// ------------------------------------------------------------------------------------ //

	std::cout << "8. \"vilma\" trying to use unequiped materias on \"oktorok\" " << std::endl;
		vilma->unequip(0);
		vilma->use(0, *oktorok);

	std::cout << std::endl;

// ------------------------------------------------------------------------------------ //

	std::cout << "9. New character \"lucifer\" equipping and unequipping materias" << std::endl;
		ICharacter* lucifer = new Character("lucifer");
		AMateria *cure = new Cure;
		AMateria *ice = new Ice;

		lucifer->equip(cure);
		lucifer->equip(ice);
		lucifer->equip(cure);
		lucifer->equip(ice);
		lucifer->unequip(0);
		lucifer->unequip(1);
		lucifer->unequip(2);
		lucifer->unequip(3);
		lucifer->equip(cure);
		lucifer->equip(ice);

		lucifer->printMaterias();

		delete cure;
		delete ice;
	std::cout << std::endl;

// ------------------------------------------------------------------------------------ //

	std::cout << "10. Testing if unequiped materia is freed" << std::endl;

		ICharacter* test = new Character("test");
		
		tmp = src->createMateria("ice");
		test->equip(tmp);
	delete tmp;
		test->unequip(0);

	std::cout << std::endl;

// ------------------------------------------------------------------------------------ //
	std::cout << "11. Deleting \"vilma\", \"oktorok\", \"stardust\" and \"lucifer\"" << std::endl;
	
	delete test;
	delete lucifer;
	delete stardust;
	delete oktorok;
	delete vilma;
	delete src;

	return (0);
}