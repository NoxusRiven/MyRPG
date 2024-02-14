#include "Character.hpp"

Character::Character(int chHp, int chDmg, string chName) : hp(chHp), dmg(chDmg), mana(chHp), spelldmg(chDmg * 4), name(chName) {}

int Character::get_hp() const { return hp; }
void Character::set_hp(int newHp) { hp = newHp; }

int Character::get_dmg() const { return dmg; }
void Character::set_dmg(int newDmg) { dmg = newDmg; }

int Character::get_mana() const { return mana; }
void Character::set_mana(int newMana) { mana = newMana; }

int Character::get_spelldmg() const { return spelldmg; }
void Character::set_spelldmg(int newSpelldmg) { spelldmg = newSpelldmg; }

string Character::get_name() const { return name; }
void Character::set_name(string newName) { name = newName; }
