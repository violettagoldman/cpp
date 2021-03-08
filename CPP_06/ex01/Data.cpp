#include "Data.hpp"

void	*serialize(void)
{
	char	*res;

	res = new char[sizeof(Data)];
	for (int i = 0; i < 8; ++i)
		res[i] = 'a' + std::rand() % 26;
	*reinterpret_cast<int*>(res + 8) = std::rand();
	for (int i = 8 + sizeof(int); (unsigned int)i < 16 + sizeof(int); ++i)
		res[i] = 'a' + std::rand() % 26;
	return (res);
}

Data	*deserialize(void *raw)
{
	Data	*data;
	char	*bits;

	data = new Data;
	bits = reinterpret_cast<char*>(raw);
	data->s1 = std::string(bits, 8);
	data->n = *reinterpret_cast<int *>(bits + 8);
	data->s2 = std::string(bits + 8 + sizeof(int), 8);
	return (data);
}