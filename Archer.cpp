#include "archer.hpp"
Archer::Archer(): Character(){
archHp = get_hp() * 1.25;
archDmg = get_dmg() * 2;
name = "Archer";
}
void Archer::attack(){
// Implementacja ataku
}
void Archer::defense(){
// Implementacja obrony
}
