#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap cl4 = ScavTrap("SCAV_TRAP");
	ScavTrap veronica = ScavTrap("Veronica");

	cl4.meleeAttack("bandit");
	veronica.rangedAttack("brutal bandit");
	cl4.takeDamage(100);
	//il lui reste 3 de vie
	cl4.takeDamage(10);
	cl4.beRepaired(100000);
	cl4.takeDamage(1000);
	cl4.beRepaired(10);
	cl4.takeDamage(10);
	cl4.challengeNewcomer("Vault Hunter1");
	cl4.challengeNewcomer("Moxxi");
	cl4.challengeNewcomer("Roland");
	veronica.challengeNewcomer("Vault Hunter2");
	cl4.challengeNewcomer("Marcus");
}
