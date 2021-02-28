#ifndef PEON_HPP
# define PEON_HPP

# include <iostream>
# include "Victim.hpp"

class Peon : public Victim
{
	public:
		Peon(void);
		Peon(Peon const &src);
		Peon(std::string name);
		virtual ~Peon(void);

		Peon			&operator=(Peon const &src);
		void			getPolymorphed(void) const;

	private:
		std::string		_name;
};

#endif