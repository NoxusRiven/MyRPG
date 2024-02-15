/*#include <iostream>

using namespace std;

class Character
{
    //prywatne atrybuty klasy
    int hp,dmg,mana,spelldmg;
    string name;

    public:
    Character(int chHp=1000,int chDmg=50,string chName=""):hp(chHp),dmg(chDmg),mana(chHp),spelldmg(chDmg * 4),name(chName){}

    //gettery i settery po to zeby klasy mialy dostep do danych
    int get_hp()const{return hp;}
    void set_hp(int newHp){hp=newHp;}

    int get_dmg()const{return dmg;}
    void set_dmg(int newDmg){dmg=newDmg;}

    int get_mana()const{return mana;}
    void set_mana(int newMana){mana=newMana;}

    int get_spelldmg()const{return spelldmg;}
    void set_spelldmg(int newSpelldmg){spelldmg=newSpelldmg;}

    string get_name()const{return name;}
    void set_name(string newName){name=newName; }

    //metody klasy
    virtual void attack()=0;
    virtual void defense()=0;
};

class Mage:public Character
{
    int mageHp,mageDmg,mageMana,mageSpelldmg;
    string name;

    public:
    Mage():Character()
    {
        mageHp=get_hp();
        mageDmg=get_dmg();
        mageMana=get_mana();
        mageSpelldmg=get_spelldmg()*2;
        name="Mage";
    }


    void attack()override
    {
        /*cout<<"mage HP: "<<mageHp<<endl;
        cout<<"mage DMG: "<<mageDmg<<endl;
        cout<<"mage mana: "<<mageMana<<endl;
        cout<<"mage spellDMG: "<<mageSpelldmg<<endl;
        cout<<"mage name: "<<this->name<<endl;
    }

    void defense()override
    {
        cout<<"nothing happens here"<<endl;
    }


};

class Worrior:public Character
{
    int worHp,worDmg;
    string name;

    public:
    Worrior():Character()
    {
        worHp=get_hp()*2;
        worDmg=get_dmg()*3;
        name="Worrior";
    }


    void attack()override
    {
        /*cout<<"worrior HP: "<<worHp<<endl;
        cout<<"worrior DMG: "<<worDmg<<endl;
        cout<<"worrior name: "<<this->name<<endl;
    }

    void defense()override
    {
        cout<<"nothing happens here"<<endl;
    }

};

class Archer:public Character
{
    int archHp,archDmg;
    string name;

    public:
    Archer():Character()
    {
        archHp=get_hp()*1.25;
        archDmg=get_dmg()*2;
        name="Archer";
    }


    void attack()override
    {

        /*cout<<"archer HP: "<<archHp<<endl;
        cout<<"archer DMG: "<<archDmg<<endl;
        cout<<"archer name: "<<this->name<<endl;
    }

    void defense()override
    {
        cout<<"nothing happens here"<<endl;
    }

};

class Palladin:public Character
{
    int pallHp,pallDmg,pallMana,pallSpelldmg;
    string name;

    public:
    Palladin():Character()
    {
        pallHp=get_hp()*1.75;
        pallDmg=get_dmg()*2;
        pallMana=get_mana()/2;
        pallSpelldmg=get_spelldmg();
        name="Palladin";
    }


    void attack()override
    {
        /*cout<<"palladin HP: "<<pallHp<<endl;
        cout<<"palladin  DMG: "<<pallDmg<<endl;
        cout<<"palladin  mana: "<<pallMana<<endl;
        cout<<"palladin  spellDMG: "<<pallSpelldmg<<endl;
        cout<<"palladin  name: "<<this->name<<endl;
    }

    void defense()override
    {
        cout<<"nothing happens here"<<endl;
    }

};*/
#include "Mage.cpp"
#include "Worrior.cpp"
#include "Archer.cpp"
#include "Palladin.cpp"

int main()
{
    Mage mage;
    Worrior worrior;
    Archer archer;
    Palladin palladin;

    mage.attack();
    worrior.attack();
    archer.attack();
    palladin.attack();

    return 0;
}
