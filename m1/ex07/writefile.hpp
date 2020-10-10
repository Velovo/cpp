#ifndef WRITEFILE_HPP
# define WRITEFILE_HPP

#include <iostream>
#include <fstream>

class Writefile
{
	private:
	std::string		filename;

	public:
	std::ofstream	_fileout;

	Writefile(std::string filename);
	~Writefile();
	std::string getFilename(void);
};

#endif
