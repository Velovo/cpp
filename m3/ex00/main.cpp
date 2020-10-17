#include "FragTrap.hpp"

int main(void)
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