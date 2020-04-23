#include "item.h"
#include <iostream>

item::item()
{
	item::name = "NOT SET";
	item::rarity = 0;
	item::drop_chance = 100;
}

item::~item(){}

void item::SetName(std::string new_name)
{
	this->name=new_name;
}

void item::SetRarity(int new_value)
{
	this->rarity=new_value;
}

void item::SetDropChance(int new_value)
{
	this->drop_chance=new_value;
}

std::string item::GetName()
{
	return this->name;
}

int item::GetRarity()
{
	return this->rarity;
}

int item::GetDropChance()
{
	return this->drop_chance;
}
