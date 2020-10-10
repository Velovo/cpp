#include "main.hpp"
#include <string.h>

int error(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Error: don't have a good number of arguments, expected 4" << std::endl;
		return (1);
	}
	for (int i = 1; i <= 3; ++i)
	{
		if (strlen(argv[i]) == 0)
		{
			std::cout << "Error: expecting non null string as input" << std::endl;
			return (1);
		}
	}
	return (0);
}

void findAndReplaceAll(std::string &data, std::string search, std::string replace)
{
	size_t pos;

	pos = data.find(search);
	while (pos != std::string::npos)
	{
		data.replace(pos, search.size(), replace);
		pos =data.find(search, pos + replace.size());
	}
}

int main(int argc, char **argv)
{
	if (error(argc, argv) == 1)
		return (1);
	Readfile in(argv[1]);
	Writefile out(in.getFilename() + ".replace");
	std::string search = std::string(argv[2]);
	std::string replace = std::string(argv[3]);
	std::string buffer;
	while (std::getline(in._filein, buffer))
	{
		findAndReplaceAll(buffer, search, replace);
		out._fileout << buffer;
	}
	return (0);
}
