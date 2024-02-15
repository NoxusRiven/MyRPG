#include "Mage.hpp"

Mage::Mage():Character()
{
    mageHp=get_hp();
    mageDmg=get_dmg();
    mageMana=get_hp();
    mageSpelldmg=get_spelldmg()*2;
    name="Mage";
}

void Mage::attack()
{
    int chooseSpell;

    cout<<"Choose witch spell ur going to cast"<<endl;
    cout<<"1.Fireball, mana: "<<mageSpelldmg/4<<" dmg: "<<mageSpelldmg/2<<endl;
    cout<<"2.Lightning strike, mana: "<<mageSpelldmg/2<<" dmg: "<<mageSpelldmg<<endl;

    cin>>chooseSpell;

    switch (chooseSpell)
    {
        case 1:
            cout<<"Mage casts a fireball that deals "<<mageSpelldmg/2<<" damage (-"<<mageSpelldmg/4<<" mana)"<<endl;
            mageMana-=mageSpelldmg/4;
            cout<<"mana: "<<mageMana<<endl;
            break;
        case 2:
            cout<<"Mage casts a lightning strike that deals "<<mageSpelldmg<<" damage (-"<<mageSpelldmg/2<<" mana)"<<endl;
            mageMana-=mageSpelldmg/2;
            cout<<"mana: "<<mageMana<<endl;
            break;
    
        default:
            cout<<"There is no option that u chose"<<endl;
            break;
    }
}

void Mage::defense()
{
cout<<this->name<<endl;
}

