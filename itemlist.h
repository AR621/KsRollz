#ifndef ITEMLIST_H_
#define ITEMLIST_H_

#include <vector>
#include <string>

class item;

class itemlist
{
private:
	std::vector<item> droplist;
	int RandomCount = 0;
	int max_roll = 0;
public:
	itemlist();
	~itemlist();
	void AddItem(item);
	int RollNum();
	item MakeItemFromStr(std::string line);
	std::vector<item> ReturnList();
	itemlist InitialiseList(std::vector<std::string>);
	std::string RollItem(int);
};
#endif
