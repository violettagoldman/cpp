#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>

class ICharacter;
class AMateria
{
	public:
		AMateria(void);
		AMateria(std::string const &type);
		AMateria(AMateria const &src);
		virtual ~AMateria(void);

		AMateria					&operator=(AMateria const &src);
		std::string const	&getType(void) const;
		unsigned int			getXP(void) const;
		virtual AMateria	*clone(void) const = 0;
		virtual void			use(ICharacter &target);

	protected:
		unsigned int	_xp;
		std::string		_type;
};

# include "ICharacter.hpp"

#endif