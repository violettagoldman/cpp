#ifndef PONY_HPP
# define PONY_HPP

# include <string>
# include <iostream>

class	Pony
{
	public:
		Pony(std::string name, std::string color);
		~Pony(void);

		void	sing(void) const;

	private:
		std::string _name;
		std::string _color;
};

void	ponyOnTheStack(void);
void	ponyOnTheHeap(void);

#endif
