#ifndef WORRIOR_HPP
#define WORRIOR_HPP

#include "Character.cpp"

class Worrior:public Character
{
    int worHp,worDmg;
    string name;

    public:
    Worrior();

    void attack() override;
    void defense() override;
};
#endif

