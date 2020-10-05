#ifndef Pony_hpp
# define Pony_hpp

#include <iostream>

using namespace std;
class Pony
{
	private:
	
	string mane; //criniere
	string tail; //queue
	string coat; //pelage
	int height; //la taille mdr

	public:

	void set_mane(string str) {
		mane = str;
	}
	void set_tail(string str) {
		tail = str;
	}
	void set_coat(string str) {
		coat = str;
	}
	void set_height(int h) {
		height = h;
	}

	string get_mane() {
		return (mane);
	}
	string get_tail() {
		return (tail);
	}
	string get_coat() {
		return (coat);
	}
	int get_height() {
		return (height);
	}
};

void ponyOnTheStack(string mane, string tail, string coat, int height);
void ponyOnTheHeap(string mane, string tail, string coat, int height);

#endif