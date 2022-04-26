#pragma once
#include "Character.h"
#include "AttackItem.h"

struct Paladin : Character
{
    Paladin(std::string name, int hp, int armor);
    std::string getStats() override;
    const std::string& getName() override;
private:
    const std::string name;
};
