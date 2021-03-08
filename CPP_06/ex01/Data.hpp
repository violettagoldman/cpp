#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>
# include <ctime>
# include <cstdlib>

struct Data
{
	std::string	s1;
	int			n;
	std::string	s2;
};

void	*serialize(void);
Data	*deserialize(void *raw);
#endif