#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include "AWeapon.hpp"
# include <iostream>

class PlasmaRifle : public AWeapon
{
    public:
    PlasmaRifle();
    virtual ~PlasmaRifle();
    PlasmaRifle(const PlasmaRifle &pr);
    PlasmaRifle &operator=(const PlasmaRifle &pr);
    void attack() const;
};

#endif
