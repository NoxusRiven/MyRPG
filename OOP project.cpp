#include <iostream>

using namespace std;

class Character
{
    //prywatne atrybuty klasy
    int hp, dmg, mana, spelldmg;
    string name;
    
    public:
    Character(int chHp = 1000, int chDmg = 50, string chName = "") : hp(chHp), dmg(chDmg), mana(chHp), spelldmg(chDmg * 4), name(chName) {}

    //gettery i settery po to zeby klasy mialy dostep do danych
    int get_hp() const { return hp; }
    void set_hp(int newHp) { hp = newHp; }

    int get_dmg() const { return dmg; }
    void set_dmg(int newDmg) { dmg = newDmg; }

    int get_mana() const { return mana; }
    void set_mana(int newMana) { mana = newMana; }

    int get_spelldmg() const { return spelldmg; }
    void set_spelldmg(int newSpelldmg) { spelldmg = newSpelldmg; }

    string get_name() const { return name; }
    void set_name(string newName) { name = newName; }

    //metody klasy
    virtual void attack()=0;
    virtual void defense()=0;
};

class Mage:public Character
{
    int mageHp, mageDmg, mageMana, mageSpelldmg;
    string mageName;

    public:
    Mage() : Character() 
    {
        mageHp = get_hp(); //1000
        mageDmg = get_dmg(); //50
        mageMana = get_mana(); //1000
        mageSpelldmg = get_spelldmg()*2; //400 (50*4*2)
        mageName = "mage"; // mage
    }
    

    void attack() override
    {
        //cout<<mageName<<" is doing fire ball for "<<mageSpelldmg<<" damage"<<endl;
        cout<<"mage HP: "<<mageHp<<endl;
        cout<<"mage DMG: "<<mageDmg<<endl;
        cout<<"mage mana: "<<mageMana<<endl;
        cout<<"mage spellDMG: "<<mageSpelldmg<<endl;
        cout<<"mage name: "<<mageName<<endl;
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