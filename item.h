#ifndef ITEM_H_
#define ITEM_H_

#include <string>
#include <vector>

class item
{	
private:
	std::string name;
	int rarity;
	int drop_chance;
public:
	item();
	~item();
	void SetName(std::string);
	void SetRarity(int);
	void SetDropChance(int);
	std::string GetName();
	int GetRarity();
	int GetDropChance();
	item MakeItemFromStr(std::string);
};
#endif
