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
