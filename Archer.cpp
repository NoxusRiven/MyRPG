#include "Archer.hpp"
Archer::Archer(): Character(){
archHp = get_hp() * 1.25;
archDmg = get_dmg() * 2;
name = "Archer";
}
void Archer::attack()
{
    //cout<<this->name<<endl;
}
void Archer::defense()
{
    cout<<this->name<<endl;
}
