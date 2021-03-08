#include "Data.hpp"

int		main(void)
{
	void	*bits;
	Data	*data;

	std::srand(time(0));
	bits = serialize();
	data = deserialize(bits);

	std::cout << "s1: " << data->s1 << std::endl;
	std::cout << "s2: " << data->s2 << std::endl;
	std::cout << " n: " << data->n << std::endl;

	delete []reinterpret_cast<char*>(bits);
	delete data;
	return (0);
}