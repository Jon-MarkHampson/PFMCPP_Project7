#include "Paladin.h"
#include "Utility.h"

Paladin::Paladin(std::string charName, int hp, int armor) : Character(hp, armor, 10), name(charName) 
{
    helpfulItems = makeHelpfulItems(2);
    defensiveItems = makeDefensiveItems(1);
}

const std::string& Paladin::getName()
{
    return name;
}

std::string Paladin::getStats()
{
    return getCharacterStats(this);
}
