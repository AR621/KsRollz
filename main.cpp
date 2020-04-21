#include <iostream>
#include "filereader.h"
#include "itemlist.h"


int main()
{
	filereader filereader;
	filereader.Read("test.txt");
	filereader.OutputReadFile();
}
