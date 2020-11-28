#include "AWeapon.hpp"
#include "Character.hpp"
#include "Enemy.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"

#include <iostream>

int main()
{
	{
		// Character* moi = new Character("moi");
		// std::cout << *moi;
		// Enemy* b = new RadScorpion();
		// AWeapon* pr = new PlasmaRifle();
		// AWeapon* pf = new PowerFist();
		// moi->equip(pr);
		// std::cout << *moi;
		// moi->equip(pf);
		// moi->attack(b);
		// std::cout << *moi;
		// moi->equip(pr); 
		// std::cout << *moi;
		// moi->attack(b);
		// std::cout << *moi;
		// moi->attack(b);
		// std::cout << *moi;
		// return 0;
	}

	{
		Character* main = new Character("test1212");
		Enemy* a = new RadScorpion();
		Enemy* b = new SuperMutant;
		AWeapon* pr = new PlasmaRifle();
		AWeapon* pf = new PowerFist();

		std::cout << *main;
		main->equip(pf);
		std::cout << *main;

		std::cout << b->getHP() << std::endl;
		main->attack(b);
		std::cout << b->getHP() << std::endl;
		main->attack(b);
		main->attack(b);
		main->attack(b);
		main->attack(b);
		main->attack(b);
		main->attack(b);
		std::cout << b->getHP() << std::endl;
		std::cout << *main;
		main->recoverAP();
		std::cout << *main;
		main->attack(a);
		std::cout << *main;

		delete main;
		delete a;
		delete b;
		delete pr;
		delete pf;
		return 0;
	}
}
