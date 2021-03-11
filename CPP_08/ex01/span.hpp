#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <stdexcept>
# include <vector>
# include <algorithm>
# include <cmath>
# include <climits>
# include <functional>

class Span
{
	public:
		Span(void);
		Span(unsigned int n);
		Span(Span const &src);
		~Span(void);

		Span	&operator=(Span const &src);
		void	addNumber(int n);
		void	addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		int		shortestSpan(void);
		int		longestSpan(void);
		bool	inSpan(int n);

	private:
		std::vector<int>	_v;
		unsigned int		_maxSize;
};

#endif