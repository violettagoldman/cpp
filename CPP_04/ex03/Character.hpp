#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "ICharacter.hpp"
# include "Ice.hpp"
# include "Cure.hpp"

class Character: public ICharacter
{
	public:
		Character(void);
		Character(std::string const &name);
		Character(Character const &src);
		~Character(void);

		Character					&operator=(Character const &src);
		std::string const	&getName() const;
		void							equip(AMateria* m);
		void							unequip(int idx);
		void							use(int idx, ICharacter& target);

		private:
			std::string			_name;
			AMateria				*_inventory[4];
			int							_current;
};

#endif