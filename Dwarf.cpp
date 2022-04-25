#include "Dwarf.h"
#include "Utility.h"

Dwarf::Dwarf(std::string charName, int hp, int armor) : Character(hp, armor, 4), name(charName) 
{
    helpfulItems = makeHelpfulItems(3);
    defensiveItems = makeDefensiveItems(2);
}

const std::string& Dwarf::getName()
{
    return name;
}

std::string Dwarf::getStats()
{
    return getCharacterStats(this);
}

void Dwarf::attack(Character& other)
{
    Character::attack(other);
}
