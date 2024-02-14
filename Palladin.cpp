#include "palladin.hpp"
Palladin::Palladin(): Character(){
pallHp = get_hp() * 1.75;
pallDmg = get_dmg() * 2;
pallMana = get_mana() / 2;
pallSpelldmg = get_spelldmg();
name = "Palladin";
}
void Palladin::attack(){
    cout<<this->name<<endl;
}
void Palladin::defense(){
    cout<<this->name<<endl;
}
