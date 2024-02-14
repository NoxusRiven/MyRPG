#ifndef WORRIOR_HPP
#define WORRIOR_HPP
#include "character.hpp"
class Worrior : public Character{
public:
Worrior();
void attack() override;
void defense() override;
};
#endif

