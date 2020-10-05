#ifndef ZombieEvent_hpp
# define ZombieEvent_hpp

# include "Zombie.hpp"

class ZombieEvent
{
    public:
        ZombieEvent(void);
        ~ZombieEvent();
        void setZombieType(std::string type);
        Zombie *newZombie(std::string name) const;
        void randomChump(void) const;
    private:
        std::string _type;
};

#endif
