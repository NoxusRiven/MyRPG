#include "Archer.hpp"

Archer::Archer():Character()
{
    archHp=get_hp()*1.25;
    archDmg=get_dmg()*2;
    name="Archer";
}
void Archer::attack()
{
    int chooseAttack;

    cout<<"Choose witch attack ur going to perform"<<endl;
    cout<<"1.Double shot, dmg: "<<archDmg*2<<endl;
    cout<<"2.Powerfull arrow, dmg: "<<archDmg*1.5<<endl;

    cin>>chooseAttack;

    switch (chooseAttack)
    {
        case 1:
            cout<<"Archer performs a double shot that deals "<<archDmg*2<<" damage"<<endl;
            break;
        case 2:
            cout<<"Archer performs a powerfull arrow that deals "<<archDmg*1.5<<" damage"<<endl;
            break;
    
        default:
            cout<<"There is no option that u chose"<<endl;
            break;
    }
}
void Archer::defense()
{
    cout<<this->name<<endl;
}
