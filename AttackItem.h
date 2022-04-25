#pragma once
#include "Item.h"

struct AttackItem : Item
{
    AttackItem() : Item("attackItem", 10) {}
    ~AttackItem() override;

    void use(Character*) override;
};
