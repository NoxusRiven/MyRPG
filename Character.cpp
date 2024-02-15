#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include <string>

using namespace std;

class Character {
private:
    int hp, dmg, mana, spelldmg;
    string name;

public:
    Character(int chHp = 1000, int chDmg = 50, std::string chName = "")
        : hp(chHp), dmg(chDmg), mana(chHp), spelldmg(chDmg * 4), name(chName) {}

    int get_hp() const { return hp; }
    void set_hp(int newHp) { hp = newHp; }

    int get_dmg() const { return dmg; }
    void set_dmg(int newDmg) { dmg = newDmg; }

    int get_mana() const { return mana; }
    void set_mana(int newMana) { mana = newMana; }

    int get_spelldmg() const { return spelldmg; }
    void set_spelldmg(int newSpelldmg) { spelldmg = newSpelldmg; }

    std::string get_name() const { return name; }
    void set_name(std::string newName) { name = newName; }

    virtual void attack() = 0;
    virtual void defense() = 0;
};

#endif
