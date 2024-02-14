#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include <string>

using namespace std;

class Character 
{

    int hp, dmg, mana, spelldmg;
    string name;

    public:
    Character(int chHp = 1000,int chDmg = 50,string chName = "");

    int get_hp() const;
    void set_hp(int newHp);

    int get_dmg() const;
    void set_dmg(int newDmg);

    int get_mana() const;
    void set_mana(int newMana);

    int get_spelldmg() const;
    void set_spelldmg(int newSpelldmg);

    string get_name() const;
    void set_name(string newName);

    virtual void attack() = 0;
    virtual void defense() = 0;
};

#endif
