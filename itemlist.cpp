#include "itemlist.h"
#include "item.h"
#include <vector>
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

int itemlist::RollNum()
{
	srand(time(NULL));
	int num_of_items = this->droplist.size();
	for (int i = 0; i < num_of_items; i++)
		this->max_roll = this->max_roll + droplist.at(i).GetDropChance();
	int roll = rand() % this->max_roll + 1;
	this->RandomCount++;
	return roll;
}


item itemlist::MakeItemFromStr(std::string line)
{
	item NewItem;
	std::string value;
	int j = 0;
	for (int i = 0; i <= line.length(); i++)
	{
		if (line[i] != 59 && i < line.length())
			value.push_back(line[i]);
		else
		{
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

std::vector<item> itemlist::ReturnList()
{
	return this->droplist;
}

std::string itemlist::RollItem(int Roll)
{
	int RolledItemNum = 0;
	int CurrentRollPool = this->droplist[RolledItemNum].GetDropChance();
	while(Roll > 0)
	{
		if (CurrentRollPool > 0)
		{
			CurrentRollPool--;
			Roll--;
		}
		else if (CurrentRollPool == 0)
		{
			RolledItemNum++;
			CurrentRollPool = this->droplist[RolledItemNum].GetDropChance();		
		}
	}
	return this->droplist[RolledItemNum].GetName();
}
