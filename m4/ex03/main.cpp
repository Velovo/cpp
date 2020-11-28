#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main()
{
	{
		// IMateriaSource* src = new MateriaSource();
		// src->learnMateria(new Ice());
		// src->learnMateria(new Cure());

		// ICharacter* moi = new Character("moi");
		// AMateria* tmp;
		
		// tmp = src->createMateria("ice");
		// moi->equip(tmp);
		// tmp = src->createMateria("cure");
		// moi->equip(tmp);
		
		// ICharacter* bob = new Character("bob");
		
		// moi->use(0, *bob);
		// moi->use(1, *bob);
		
		// delete bob;
		// delete moi;
		// delete src;
	}

	{
		ICharacter* test = new Character("test");
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		std::cout << src->createMateria("cure") << std::endl;
		src->learnMateria(new Cure());
		test->equip(src->createMateria("cure"));
		test->use(0, *test);
		test->use(1, *test);
		delete test;
		delete src;
	}

	return 0;
}
