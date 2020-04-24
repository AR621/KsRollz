#include <iostream>
#include "filereader.h"
#include "itemlist.h"
#include "item.h"

int main()
{
	filereader File;
	File.Read("test.txt");
	itemlist DropList;
	for (int i = 0; i < File.OutputReadFile().size(); i++)
		DropList.AddItem(DropList.MakeItemFromStr(File.OutputReadFile()[i]));
	std::cout << DropList.RollItem(DropList.RollNum());
}
