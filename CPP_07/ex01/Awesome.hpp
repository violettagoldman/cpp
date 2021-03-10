#ifndef AWESOME_HPP
# define AWESOME_HPP

class Awesome
{
	public:
		Awesome(void) {_n = 42;}
		Awesome(int n) : _n(42){(void)n; return;}
		Awesome(Awesome const &src) {*this = src;}
		~Awesome(void) {}

		Awesome	&operator=(Awesome const &src) {if (this != &src) this->_n = src._n; return (*this);}
		int		get(void) const {return (this->_n);}

	private:
		int	_n;
};

std::ostream &operator<<(std::ostream &o, Awesome const &src) {o << src.get(); return (o);}

#endif