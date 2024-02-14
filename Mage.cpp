#include "mage.hpp"
Mage::Mage(): Character()
{
    mageHp=get_hp();
    mageDmg=get_dmg();
    mageMana=get_hp();
    mageSpelldmg=get_spelldmg()*2;
    name="Mage";
}

void Mage::attack()
{
cout<<this->name<<endl;
}

void Mage::defense()
{
cout<<this->name<<endl;
}

