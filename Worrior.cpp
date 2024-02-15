#include "Worrior.hpp"

Worrior::Worrior():Character()
{
    worHp=get_hp()*2;
    worDmg=get_dmg()*3;
    name="Worrior";
}

void Worrior::attack()
{
    int chooseAttack;

    cout<<"Choose witch attack ur going to perform"<<endl;
    cout<<"1.Slash, dmg: "<<worDmg*1.5<<endl;
    cout<<"2.Sword charge, dmg: "<<worDmg*2<<endl;

    cin>>chooseAttack;

    switch (chooseAttack)
    {
        case 1:
            cout<<"Worrior performs a slash that deals "<<worDmg*1.5<<" damage"<<endl;
            break;
        case 2:
            cout<<"Worrior performs a sword charge that deals "<<worDmg*2<<" damage"<<endl;
            break;
    
        default:
            cout<<"There is no option that u chose"<<endl;
            break;
    }
}


void Worrior::defense()
{
    cout<<0<<endl;
}
