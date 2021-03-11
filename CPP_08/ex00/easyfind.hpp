#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>

template <typename T>
int easyfind(T &el, int i)
{
  typename T::iterator it;

	it = std::find(el.begin(), el.end(), i);
	if (it != el.end())
		return (*it);
	throw std::exception();
}

#endif