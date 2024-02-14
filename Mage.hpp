#ifndef MAGE_HPP
#define MAGE_HPP
#include "character.hpp"
class Mage : public Character
{
public:

Mage();

void attack() override;
void defense() override;
};
#endif
