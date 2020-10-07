#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class ZombieHorde
{
    private:
    size_t number;
    Zombie *zombie;

    public:
    ZombieHorde(int n);
    ~ZombieHorde();
    std::string get_random_name(void);
};

#endif
