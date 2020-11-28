#include "AWeapon.hpp"
#include "Character.hpp"
#include "Enemy.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"

#include <iostream>

class Bazooka : public AWeapon {
    public:
    Bazooka() : AWeapon("Bazooka", 40, 100) { };
    virtual ~Bazooka() { };
    void attack() const { std::cout << "KABOOM" << std::endl; };
};

class Blob : public Enemy {
	public:
	Blob() : Enemy(20, "Blob") { std::cout << "blob plop" << std::endl; };
	virtual ~Blob() { std::cout << "splosh" << std::endl; };
};

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
		// return 0;
	}

	{
		Character* main = new Character("test1212");
		AWeapon *bz = new Bazooka();
		Enemy *b = new Blob();
		main->equip(bz);
		std::cout << *main;
		main->attack(b);
		delete main;
		delete bz;
		delete b;
	}
}
