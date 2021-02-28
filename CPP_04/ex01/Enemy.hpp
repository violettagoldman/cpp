#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>

class Enemy
{
	public:
		Enemy(void);
		Enemy(int hp, std::string const &type);
		Enemy(Enemy const &src);
		virtual	~Enemy(void);

		Enemy					&operator=(Enemy const &src);
		std::string		getType(void) const;
		int						getHP(void) const;
		virtual void	takeDamage(int damage);

	protected:
		std::string		_type;
		int						_hp;

};

#endif