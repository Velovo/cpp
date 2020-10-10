#ifndef READFILE_HPP
# define READFILE_HPP

#include <iostream>
#include <fstream>

class Readfile
{
	private:
	std::string		filename;

	public:
	std::ifstream	_filein;

	Readfile(std::string filename);
	~Readfile();
	std::string readline(void);
	std::string getFilename(void);
};

#endif
