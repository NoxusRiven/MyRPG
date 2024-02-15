#ifndef ARCHER_HPP
#define ARCHER_HPP

#include "Character.cpp"

class Archer:public Character
{
    int archHp,archDmg;
    string name;

    public:
    Archer();
    
    void attack() override;
    void defense() override;
};
#endif
