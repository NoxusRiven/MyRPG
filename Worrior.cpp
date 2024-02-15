#include "Worrior.hpp"
Worrior::Worrior(): Character()
{
worHp = get_hp() * 2;
worDmg = get_dmg() * 3;
name = "Worrior";
}
void Worrior::attack(){
    cout<<this->name<<endl;
}
void Worrior::defense()
{
    cout<<0<<endl;
}
