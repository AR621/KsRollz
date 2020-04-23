#include "itemlist.h"
#include "item.h"
#include <vector>
#include <iostream>
#include <ctime>

itemlist::itemlist()
{
	droplist;
}

itemlist::~itemlist(){}

void itemlist::AddItem(item new_item)
{
	droplist.push_back(new_item);
}

void itemlist::RollItem()
{
	srand(time(NULL));
	int max_roll = 1,num_of_items = this->droplist.size();
	for (int i = 0; i < num_of_items; i++)
		max_roll = max_roll + droplist.at(i).GetDropChance();
	int roll = rand() % max_roll + 1;
	std::cout << max_roll;
}

item itemlist::MakeItemFromStr(std::string line)
{
	item NewItem;
	std::string value;
	for (int i = 0; i <= line.length(); i++)
	{
		int j = 0;
		if (line[i] != 59 && i < line.length())
			value.push_back(line[i]);
		else
		{
			std::cout << value << std::endl;
			if (j == 0)
				NewItem.SetName(value);
			if (j == 1)
				NewItem.SetRarity(std::stoi(value));
			if (j == 2)
				NewItem.SetDropChance(std::stoi(value));
			j++;
			value.clear();
		}
	}
	return NewItem;
}

itemlist InitialiseList(std::vector<std::string> File)
{
	itemlist NewList;
	for (int i = 0; i <= File.size(); i++)
		NewList.AddItem(NewList.MakeItemFromStr(File[i]));
	return NewList;
}
