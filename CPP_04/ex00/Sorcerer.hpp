#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include "Victim.hpp"

class Sorcerer
{
	public:
		Sorcerer(void);
		Sorcerer(Sorcerer const &src);
		Sorcerer(std::string name, std::string title);
		~Sorcerer(void);

		Sorcerer		&operator=(Sorcerer const &src);
		void				polymorph(Victim const &v) const;
		std::string		getName(void) const;
		std::string		getTitle(void) const;

	private:
		std::string		_name;
		std::string		_title;
};

std::ostream& 	operator<<(std::ostream &out, Sorcerer const &target);

#endif