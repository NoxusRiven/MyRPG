#include "Palladin.hpp"

Palladin::Palladin():Character()
{
    pallHp=get_hp()*1.75;
    pallDmg=get_dmg()*2;
    pallMana=get_mana()/2;
    pallSpelldmg=get_spelldmg();
    name="Palladin";
}
void Palladin::attack()
{
    int choose;

    cout<<"Choose what you are going to do"<<endl;
    cout<<"1.Perform an attack"<<endl;
    cout<<"2.Cast a spell"<<endl;

    cin>>choose;

    switch (choose)
    {
        case 1:
            int chooseAttack;

            cout<<"Choose witch attack ur going to perform"<<endl;
            cout<<"1.Slash, dmg: "<<pallDmg*1.5<<endl;
            cout<<"2.Sword charge, dmg: "<<pallDmg*2<<endl;

            cin>>chooseAttack;

            switch (chooseAttack)
            {
                case 1:
                    cout<<"Palladin performs a slash that deals "<<pallDmg*1.5<<" damage"<<endl;
                    break;
                case 2:
                    cout<<"Palladin performs a sword charge that deals "<<pallDmg*2<<" damage"<<endl;
                    break;
    
                default:
                    cout<<"There is no option that u chose"<<endl;
                    break;
            }

            break;
        case 2:
            int chooseSpell;

            cout<<"Choose witch spell ur going to cast"<<endl;
            cout<<"1.Fireball, mana: "<<pallSpelldmg/4<<" dmg: "<<pallSpelldmg/2<<endl;

            cin>>chooseSpell;

            switch (chooseSpell)
            {
                case 1:
                    cout<<"Palladin casts a fireball that deals "<<pallSpelldmg/2<<" damage (-"<<pallSpelldmg/4<<" mana)"<<endl;
                    pallMana-=pallSpelldmg/4;
                    cout<<"mana: "<<pallMana<<endl;
                    break;
    
                default:
                    cout<<"There is no option that u chose"<<endl;
                    break;
            }

            break;
    
        default:
            cout<<"There is no option that u chose"<<endl;
            break;
    }
}
void Palladin::defense()
{
    cout<<this->name<<endl;
}
