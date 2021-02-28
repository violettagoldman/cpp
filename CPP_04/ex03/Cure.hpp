#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure(void);
		Cure(std::string const &type);
		Cure(Cure const &src);
		~Cure(void);

		Cure			&operator=(Cure const &src);
		AMateria	*clone(void) const;
		void			use(ICharacter &target);
};

#endif