#ifndef ROSE_HPP
# define ROSE_HPP

# include <iostream>
# include "Victim.hpp"

class Rose : public Victim
{
	public:
		Rose(void);
		Rose(Rose const &src);
		Rose(std::string name);
		virtual ~Rose(void);

		Rose			&operator=(Rose const &src);
		void			getPolymorphed(void) const;

	private:
		std::string		_name;
};

#endif