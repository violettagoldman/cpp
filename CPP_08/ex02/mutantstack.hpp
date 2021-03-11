#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <algorithm>
# include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;

		MutantStack(void) : std::stack<T>() {};
		MutantStack(const MutantStack<T> &src) : std::stack<T>(src) {};
		~MutantStack(void) {};
		MutantStack<T>		&operator=(const MutantStack<T> &src)
		{
			this->c = src.c;
			return (*this);
		};

		iterator			begin(void)
		{
			return (this->c.begin());
		};

		iterator			end(void)
		{
			return (this->c.end());
		};
};

#endif