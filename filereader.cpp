#include "filereader.h"
#include <iostream>
#include <fstream>
#include <string>

filereader::filereader(){}
filereader::~filereader(){}

void filereader::Read(std::string filename)
{
	std::string line;
	std::ifstream itemfile(filename);
	if (itemfile.is_open())
	{
		while (std::getline(itemfile, line))
			lines.push_back(line);
	}
	else
		std::cout << "Unable to open following file!";
	itemfile.close();
}

std::vector<std::string> filereader::OutputReadFile()
{
	return lines;
}


	
/*			std::string var;
			for (int i = 0; i < line.length(); i++)
			{
				int j = 0;
				if (line[i] != 59)
					var.push_back(line[i]);
				else
				{
					if (j == 0)
						item.SetName(var);
					if (j == 1)
						item.SetRarity(std::stoi(var));
					if (j == 2)
						item.SetDropChance(std::stoi(var));
					j++;	
				}

			}
		}
		itemfile.close();
		}
*/
