#ifndef FILE_HPP
# define FILE_HPP

#include <iostream>
#include <fstream>

class File
{
	private:
	std::string		filename;
	bool			inout;

	public:
	std::ifstream	_filein;
	std::ofstream	_fileout;

	File(std::string filename, bool inout);
	~File();
	std::string readline(void);
	std::string getFilename(void);
	void	setMode(bool inout);
	bool	getMode(void);
};

#endif
