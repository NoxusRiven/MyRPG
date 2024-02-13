#include <iostream>

using namespace std;

class Character
{
    //prywatne atrybuty klasy
    int hp,dmg,mana,spelldmg;
    string name;
    
    public:
    //getter i setter dla hp
    int get_hp() const{return hp;}
    void set_hp(int newHp) {hp=newHp;}

    //getter i setter dla dmg
    int get_dmg() const{return dmg;}
    void set_dmg(int newDmg) {dmg=newDmg;}

    //getter i setter dla mana
    int get_mana() const{return mana;}
    void set_mana(int newMana) {mana=newMana;}

    //getter i setter dla spelldmg
    int get_spelldmg() const{return spelldmg;}
    void set_spelldmg(int newSpelldmg) {spelldmg=newSpelldmg;}

    //getter i setter dla name
    string get_name() const{return name;}
    void set_name(string newName) {name=newName;}

    //metody klasy
    virtual void attack()=0;
    virtual void deffense()=0;
};

class Mage:public Character
{
    int mageHp,mageDmg,mageMana,mageSpelldmg;
    string mageName;

    public:
    Mage(int mageHp=1000,int mageDmg=50,int mageMana=1000,int mageSpelldmg=500,string mageName="mage")
    {
        get_dmg()
    }

    void attack() override
    {
        cout<<this->name<<" is doing fire ball for "<<mana/2<<" damage"<<endl;
    }

    void deffense() override
    {
        cout<<"nothing happens here"<<endl;
    }


};

class Worrior:public Character
{

};  

class Archer:public Character
{

};

int main()
{
    Mage mage;

    mage.attack();

    return 0;
}