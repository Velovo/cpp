#ifndef Pony_hpp
# define Pony_hpp

#include <iostream>

class Pony
{
	private:

	std::string mane; //criniere
	std::string tail; //queue
	std::string coat; //pelage
	int height; //la taille mdr

	public:

	Pony();
	~Pony();

	void set_mane(std::string str) {
		mane = str;
	}
	void set_tail(std::string str) {
		tail = str;
	}
	void set_coat(std::string str) {
		coat = str;
	}
	void set_height(int h) {
		height = h;
	}

	std::string get_mane() {
		return (mane);
	}
	std::string get_tail() {
		return (tail);
	}
	std::string get_coat() {
		return (coat);
	}
	int get_height() {
		return (height);
	}
};

void ponyOnTheStack(std::string mane, std::string tail, std::string coat, int height);
void ponyOnTheHeap(std::string mane, std::string tail, std::string coat, int height);

#endif