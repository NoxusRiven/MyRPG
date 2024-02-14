#ifndef WORRIOR_HPP
#define WORRIOR_HPP
#include "character.hpp"
class Worrior : public Character
{
    int worHp,worDmg;
    string name;
public:
Worrior();
void attack() override;
void defense() override;
};
#endif

