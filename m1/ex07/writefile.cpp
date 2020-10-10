#include "writefile.hpp"

Writefile::Writefile(std::string filename)
{
	this->filename = filename;

	this->_fileout.open(filename, std::fstream::out | std::fstream::app);
	this->_fileout.close();
	this->_fileout.open(filename, std::fstream::out);

	if (this->_fileout.fail())
	{
		std::cout << "Error: bad file" << std::endl;
		exit(1);
	}
}

Writefile::~Writefile()
{
	this->_fileout.close();
		// this->_fileout.close();
}

std::string Writefile::getFilename(void)
{
	return (this->filename);
}
