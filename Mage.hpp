#ifndef MAGE_HPP
#define MAGE_HPP
#include "character.hpp"
class Mage : public Character
{
    int mageHp,mageDmg,mageMana,mageSpelldmg;
    string name;
    public:

    Mage();

    void attack() override;
    void defense() override;
};
#endif
