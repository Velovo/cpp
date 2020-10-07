#ifndef ZombieEvent_hpp
# define ZombieEvent_hpp

#include <iostream>
#include "Zombie.hpp"

class ZombieEvent
{
    private:
    std::string type;

    public:
    ZombieEvent();
    ~ZombieEvent();
    void setZombieType(std::string);
    Zombie *newZombie(std::string name);
    void randomChump();
};

#endif
