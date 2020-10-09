#include "file.hpp"

File::File(std::string filename, bool inout)
{
	this->filename = filename;
	this->inout = inout;
	if (inout == true)
		this->_filein.open(filename, std::fstream::in);
	else
	{
		this->_fileout.open(filename, std::fstream::out | std::fstream::app);
		this->_fileout.close();
		this->_fileout.open(filename, std::fstream::out);
	}
	if (this->_fileout.fail())
	{
		std::cout << "Error: bad file" << std::endl;
		exit(1);
	}
}

File::~File()
{
	if (this->getMode() == true)
		this->_filein.close();
	if (this->getMode() == false)
		this->_fileout.close();
}

std::string File::readline(void)
{
	std::string ret;

	std::getline(this->_filein, ret);
	return (ret);
}

std::string File::getFilename(void)
{
	return (this->filename);
}

void	File::setMode(bool inout)
{
	this->inout = inout;
}

bool File::getMode(void)
{
	return (inout);
}
