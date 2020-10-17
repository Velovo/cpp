#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap cl4 = ScavTrap("CLAP_TRAP");
	FragTrap veronica = FragTrap("Veronica");

	cl4.challengeNewcomer("Vault Hunter1");
	cl4.challengeNewcomer("Moxxi");
	cl4.challengeNewcomer("Roland");
	cl4.challengeNewcomer("Vault Hunter2");
	cl4.challengeNewcomer("Marcus");
}
