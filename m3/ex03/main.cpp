#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

int main(void)
{
	FragTrap cl4 = FragTrap("cl4");
	ScavTrap scav = ScavTrap("test1212");
	ClapTrap clap = ClapTrap();
	NinjaTrap ninjayo = NinjaTrap("stoupid");
	NinjaTrap inac = NinjaTrap("test");

	inac.ninjaShoebox(cl4);
	inac.ninjaShoebox(scav);
	inac.ninjaShoebox(clap);
	inac.ninjaShoebox(ninjayo);

	inac.ninjaShoebox(cl4);
	inac.ninjaShoebox(cl4);
	inac.ninjaShoebox(cl4);
	cl4.beRepaired(100);
	inac.ninjaShoebox(cl4);
}
