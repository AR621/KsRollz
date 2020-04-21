#ifndef ITEMLIST_H_
#define ITEMLIST_H_

#include <vector>

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
};
#endif
