#ifndef ARRAY_TPP
# define ARRAY_TPP

# include <iostream>
# include <stdexcept>
# include "Awesome.hpp"

template <typename T>
class Array
{
	public:
		Array(void) : _array(nullptr), _len(0) {}
		Array(unsigned int n) : _array(new T[n]()), _len(n){}
		Array(Array const &src): _array(nullptr), _len(0) {*this = src;}
		~Array(void)
		{
			if (_array != nullptr)
				delete [] _array;
		}

		Array	&operator=(Array const &src)
		{
			if (this != &src)
			{
				if (_array != nullptr)
					delete [] _array;
				_array = new T[src.size()];
				_len = src.size();
				for (unsigned int i = 0; i < src.size(); ++i)
					_array[i] = src._array[i];
			}
			return (*this);
		}

		T	&operator[](int n) const
		{
			if (!_array || n < 0 || n >= _len)
				throw std::exception();
			return _array[n];
		}

		unsigned int size(void) const
		{
			return (_len);
		}


	private:
		T	*_array;
		int	_len;
};

#endif