#include "main.hpp"

void * serialize(void)
{
	const char alphanum[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	char *seq = new char[(8 * sizeof(char)) + sizeof(int) + (8 * sizeof(char))];

	std::srand(std::time(0));
	for (int i = 0; i < 8; ++i)
		seq[i] = alphanum[std::rand() % 62];
	*reinterpret_cast<int*> (seq + 8) = std::rand() % 1000;
	for (int i = 8 + sizeof(int); i < 20; ++i)
		seq[i] = alphanum[std::rand() % 62];
	return static_cast<void*> (seq);
}

Data * deserialize(void * raw)
{
	Data *data = new Data;
	char *seq = static_cast<char*> (raw);

	data->s1 = std::string(seq, 8);
	data->n = *reinterpret_cast<int*> (seq + 8);
	data->s2 = std::string(seq + 8 + sizeof(int), 8);
	return data;
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
