#include "span.hpp"
#include <vector>
#include <algorithm>
#include <ctime>

int		main(void)
{
	Span				sp = Span(5);
	Span				sp2 = Span(1000);
	std::vector<int>	v(1000);

	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	for (int i = 0; i < 1000; ++i)
		v[i] = i;

	sp2.addRange(v.begin(), v.end());
	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << std::endl;
	return (0);
}