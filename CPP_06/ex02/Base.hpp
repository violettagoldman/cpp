#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <ctime>
# include <cstdlib>
# include <stdexcept>
# include <string> 

class Base
{
	public:
		Base(void);
		Base(Base const &src);
		virtual ~Base(void);
		Base	&operator=(Base const &src);
};

class A : public Base
{
	public:
		A(void);
		A(A const &src);
		virtual ~A(void);
		A		&operator=(A const &src);
};
class B : public Base
{
	public:
		B(void);
		B(B const &src);
		virtual ~B(void);
		B		&operator=(B const &src);
};
class C : public Base
{
	public:
		C(void);
		C(C const &src);
		virtual ~C(void);
		C		&operator=(C const &src);
};

Base	*generate(void);
void	identify_from_pointer(Base *p);
void	identify_from_reference(Base &p);


#endif