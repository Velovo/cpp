#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	{
		FragTrap cl4 = FragTrap("CLAP_TRAP");
		FragTrap veronica = FragTrap("Veronica");

		cl4.meleeAttack("bandit");
		veronica.rangedAttack("brutal bandit");
		cl4.takeDamage(100);
		//il lui reste 5 de vie
		cl4.takeDamage(10);
		cl4.beRepaired(100000);
		cl4.takeDamage(1000);
		cl4.beRepaired(10);
		cl4.takeDamage(10);
		veronica.vaulthunter_dot_exe("giant spider");
		veronica.vaulthunter_dot_exe("BOOM BOOM");
		veronica.vaulthunter_dot_exe("Scarlet");
	}
	std::cout << std::endl << std::endl << std::endl;
	{
		ScavTrap cl4 = ScavTrap("CLAP_TRAP");
		ScavTrap veronica = ScavTrap("Veronica");

		cl4.challengeNewcomer("Vault Hunter1");
		cl4.challengeNewcomer("Moxxi");
		cl4.challengeNewcomer("Roland");
		veronica.challengeNewcomer("Vault Hunter2");
		cl4.challengeNewcomer("Marcus");
	}
}