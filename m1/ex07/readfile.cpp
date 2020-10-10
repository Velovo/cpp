#include "readfile.hpp"

Readfile::Readfile(std::string filename)
{
	this->filename = filename;
	this->_filein.open(filename, std::fstream::in);

	if (this->_filein.fail())
	{
		std::cout << "Error: bad file" << std::endl;
		exit(1);
	}
}

Readfile::~Readfile()
{
	this->_filein.close();
		// this->_fileout.close();
}

std::string Readfile::readline(void)
{
	std::string ret;

	std::getline(this->_filein, ret);
	return (ret);
}

std::string Readfile::getFilename(void)
{
	return (this->filename);
}
