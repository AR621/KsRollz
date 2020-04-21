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
