#ifndef SQUAD_HPP
# define SQUAD_HPP

# include <iostream>
# include "ISquad.hpp"
# include "ISpaceMarine.hpp"

class Squad : public ISquad
{
	public:
		Squad(Squad const &src);
		Squad(void);
		virtual ~Squad(void);

		Squad						&operator=(Squad const &src);
		int							getCount(void) const;
		ISpaceMarine*		getUnit(int) const;
		int							push(ISpaceMarine* unit);

		private:
			int						_current;
			ISpaceMarine	**_units;

};

#endif