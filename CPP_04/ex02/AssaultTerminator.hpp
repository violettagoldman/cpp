#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

# include <iostream>
# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
	public:
		AssaultTerminator(AssaultTerminator const &src);
		AssaultTerminator(void);
		virtual ~AssaultTerminator(void);

		AssaultTerminator		&operator=(AssaultTerminator const &src);
		AssaultTerminator*	clone() const;
		void								battleCry() const;
		void								rangedAttack() const;
		void								meleeAttack() const;
};

#endif