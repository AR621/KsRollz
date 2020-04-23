#ifndef ITEMLIST_H_
#define ITEMLIST_H_

#include <vector>
#include <string>

class item;

class itemlist
{
private:
	std::vector<item> droplist;
public:
	itemlist();
	~itemlist();
	void AddItem(item);
	void RollItem();
	item MakeItemFromStr(std::string line);
	itemlist InitialiseList(std::vector<std::string>);
};
#endif
