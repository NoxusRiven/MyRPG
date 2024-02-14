#include "palladin.hpp"
Palladin::Palladin(): Character(){
pallHp = get_hp() * 1.75;
pallDmg = get_dmg() * 2;
pallMana = get_mana() / 2;
pallSpelldmg = get_spelldmg();
name = "Palladin";
}
void Palladin::attack(){
// Implementacja ataku
}
void Palladin::defense(){
// Implementacja obrony
}
