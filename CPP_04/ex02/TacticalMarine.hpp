#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

# include <iostream>
# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
	public:
		TacticalMarine(TacticalMarine const &src);
		TacticalMarine(void);
		virtual ~TacticalMarine(void);

		TacticalMarine		&operator=(TacticalMarine const &src);
		TacticalMarine*		clone() const;
		void 							battleCry() const;
		void							rangedAttack() const;
		void							meleeAttack() const;
};

#endif