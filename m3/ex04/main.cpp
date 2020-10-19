#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main(void)
{
	SuperTrap omega = SuperTrap("SUPER");
	ScavTrap cobaye = ScavTrap("test1212");

	omega.meleeAttack("Vault Hunter");
	omega.rangedAttack("Vault Hunter");
	omega.ninjaShoebox(cobaye);
	omega.vaulthunter_dot_exe(cobaye.getname());
}
