#ifndef PALLADIN_HPP
#define PALLADIN_HPP
#include "character.hpp"
class Palladin : public Character{
    int pallHp,pallDmg,pallMana,pallSpelldmg;
    string name;
public:
Palladin();
void attack() override;
void defense() override;
};
#endif
