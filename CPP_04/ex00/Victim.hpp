#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>

class Victim
{
	public:
		Victim(void);
		Victim(Victim const &src);
		Victim(std::string name);
		virtual ~Victim(void);

		Victim			&operator=(Victim const &src);
		Victim			introduce(void) const;
		virtual void	getPolymorphed(void) const;
		std::string		getName(void) const;

	protected:
		std::string		_name;
};

std::ostream& 	operator<<(std::ostream &out, Victim const &target);

#endif