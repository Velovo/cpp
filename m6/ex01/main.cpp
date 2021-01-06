#include "main.hpp"

void * serialize(void)
{
	const char alphanum[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	char *seq = new char[(16 * sizeof(char)) + sizeof(int)];

	std::srand(std::time(0));
	for (int i = 0; i < 8; ++i)
		seq[i] = alphanum[std::rand() % 62];
	*reinterpret_cast<int*>(seq + 8) = std::rand() % 1000;
	for (int i = 12; i < 20; ++i)
		seq[i] = alphanum[std::rand() % 62];
	return static_cast<void*> (seq);
}

Data * deserialize(void * raw)
{
	Data *des = new Data;
	char *seq = static_cast<char*> (raw);

	des->s1 = std::string(seq, 8);
	des->n = *reinterpret_cast<int*> (seq + (8 * sizeof(char)));
	des->s2 = std::string(seq + 12, 8);
	return des;
}

int main(void)
{
	void *raw = serialize();
	Data *des = deserialize(raw);

	std::cout << des->s1 << std::endl;
	std::cout << des->n << std::endl;
	std::cout << des->s2 << std::endl;

	delete des;
	delete static_cast<char*> (raw);
}