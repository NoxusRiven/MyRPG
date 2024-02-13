#include <iostream>

using namespace std;

class Character
{
    //prywatne atrybuty klasy
    int hp,dmg,mana,spelldmg;
    string name;
    
    public:

    Character(int chHp=1000,int chDmg=50,string chName=""): hp(chHp), dmg(chDmg), mana(chHp), spelldmg(chDmg*4), name(chName) {}

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
    virtual void defense()=0;
};

class Mage:public Character
{
    int mageHp, mageDmg, mageMana, mageSpelldmg;
    string mageName;

    public:
    Mage(int mageHp, int mageDmg, int mageMana, int mageSpelldmg, string mageName = "mage") : Character(mageHp, mageDmg, mageMana, mageSpelldmg), mageHp(mageHp), mageDmg(mageDmg), mageMana(mageMana), mageSpelldmg(mageSpelldmg), mageName(mageName) {}
    

    void attack() override
    {
        cout<<mageName<<" is doing fire ball for "<<mageSpelldmg<<" damage"<<endl;
    }

    void defense() override
    {
        cout<<"nothing happens here"<<endl;
    }


};

class Worrior:public Character
{
    public:
    void attack() override = 0;
    void defense() override = 0;
};  

class Archer:public Character
{
    public:
    void attack() override = 0;
    void defense() override = 0;
};

class Palladin:public Character
{
    public:
    void attack() override = 0;
    void defense() override = 0;
};

int main()
{
    Mage mage;

    mage.attack();

    return 0;
}