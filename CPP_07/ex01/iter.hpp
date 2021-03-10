#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void	iter(T *arr, unsigned int len, void (*f)(T &el))
{
  for (unsigned int i = 0; i < len; ++i)
    f(arr[i]);
}

template <typename T>
void	print(T *arr, unsigned int len)
{
  for (unsigned int i = 0; i < len; ++i)
    std::cout << arr[i] << "\t";
  std::cout << std::endl;
}

template <typename T>
void	printOne(T &x) {std::cout << x << std::endl;}

#endif