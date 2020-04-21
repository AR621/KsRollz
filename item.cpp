#include "item.h"

item::item()
{
	item::name = "NOT SET";
	item::rarity = 0;
	item::drop_chance = 100;
	printf("item created");
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

void item::MakeFromStr(std::string line)
{
	item item;
	std::string value;
	for (int i = 0; i < line.length(); i++)
	{
		int j = 0;
		if (line[i] != 59)
			value.push_back(line[i]);
		else
		{
			if (j == 0)
				item.SetName(value);
			if (j == 1)
				item.SetRarity(std::stoi(value));
			if (j == 2)
				item.SetDropChance(std::stoi(value));
			j++;
			value = "";

		}
	}
}
