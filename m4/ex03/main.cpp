#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

class Fireball : public AMateria
{
	public:
	Fireball() : AMateria("fireball") { };
	virtual ~Fireball() { };
	AMateria* clone() const { return (new Fireball); };
	void use(ICharacter& target) { std::cout << "* shoots a fireball at " << target.getName() <<" *" << std::endl; };
};

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
		// ICharacter* test = new Character("test");
		// IMateriaSource* src = new MateriaSource();
		// src->learnMateria(new Ice());
		// std::cout << src->createMateria("cure") << std::endl;
		// src->learnMateria(new Cure());
		// test->equip(src->createMateria("cure"));
		// test->use(0, *test);
		// test->use(1, *test);
		// delete test;
		// delete src;
	}
	ICharacter* test = new Character("test");
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Fireball());

	delete src->createMateria("fireball");

	test->equip(src->createMateria("cure"));
	test->equip(src->createMateria("ice"));
	AMateria *t = src->createMateria("fireball");
	test->equip(t);
	test->use(0, *test);
	test->use(1, *test);
	test->use(2, *test);
	test->unequip(2);
	test->use(2, *test); //fait rien ducoup

	delete t;
	delete test;
	delete src;

	return 0;
}
