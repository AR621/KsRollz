#ifndef FILEREADER_H_
#define FILEREADER_H_

#include <vector>
#include <string>

class filereader{
private:
	std::vector<std::string> lines;
	std::string filename;
public:
	filereader();
	~filereader();
	void Read(std::string);
	std::vector<std::string> OutputReadFile();
};
#endif
