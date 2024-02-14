#ifndef ARCHER_HPP
#define ARCHER_HPP
#include "character.hpp"
class Archer : public Character{
public:
Archer();
void attack() override;
void defense() override;
};
#endif
