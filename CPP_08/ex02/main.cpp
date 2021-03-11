#include "mutantstack.hpp"

int		main(void)
{
	MutantStack<int>	mstack;

	mstack.push(5);
	mstack.push(17);
	std::cout << "Size: " << mstack.size() << std::endl; // 2
	std::cout << mstack.top() << std::endl; // 17
	mstack.pop(); 
	std::cout << mstack.size() << std::endl; // 1
	mstack.push(3); // 3 5
	mstack.push(5); // 5 3 5
	mstack.push(737); // 737 5 3 5
	mstack.push(0); // 0 737 5 3 5
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite) // 5	3	5	737	0
	{
		std::cout << *it << "\t";
		++it;
	}
	std::cout << std::endl;
	std::stack<int> s(mstack);
	std::cout << "Size: " << s.size() << std::endl; // 5
	while (!mstack.empty())
		mstack.pop();
	std::cout << "After cleaning the size is: " << mstack.size() << std::endl; // 0 
	for (int i = 0; i < 10; ++i)
		mstack.push(i * 2);
	it = mstack.begin();
	while (it != mstack.end())
		std::cout << *(it++) << "\t";
	std::cout << std::endl;
	return (0);
}