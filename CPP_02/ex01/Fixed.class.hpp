#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	public:
		Fixed(void);
		Fixed(Fixed const &src);
		Fixed(const int i);
		Fixed(const float f);
		~Fixed(void);

		Fixed			&operator=(Fixed const &src);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

	private:
		int					_fpv; // fixed point value
		static const int	_nbFrBits = 8; // number of fractional bits
};

std::ostream	&operator<<(std::ostream &o, Fixed const &fix);

#endif
