#ifndef AWESOME_HPP
# define AWESOME_HPP

class Awesome
{
	public:
		Awesome(void) {}
		Awesome(int n) : _n(n){}
		Awesome(Awesome const &src) {*this = src;}
		~Awesome(void) {}

		Awesome	&operator=(Awesome const &src) {if (this != &src) this->_n = src._n; return (*this);}
		bool	operator==(Awesome const &src) const {return (this->_n == src._n);}
		bool	operator!=(Awesome const &src) const {return (this->_n != src._n);}
		bool	operator>(Awesome const &src) const {return (this->_n > src._n);}
		bool	operator<(Awesome const &src) const {return (this->_n < src._n);}
		bool	operator>=(Awesome const &src) const {return (this->_n >= src._n);}
		bool	operator<=(Awesome const &src) const {return (this->_n <= src._n);}
		int		getN(void) const {return (_n);}
	private:
		int	_n;
};


#endif