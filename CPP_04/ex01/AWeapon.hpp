#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>

class AWeapon
{
	public:
		AWeapon(void);
		AWeapon(std::string const &name, int shootingCost, int damagePoints);
		AWeapon(AWeapon const &src);
		virtual ~AWeapon(void);

		AWeapon				&operator=(AWeapon const &src);
		virtual void	attack(void) const = 0;
		std::string		getName(void) const;
		int						getShootingPoints(void) const;
		int						getDamagePoints(void) const;

	protected:
		std::string		_name;
		int						_shootingCost;
		int						_damagePoints;

};

#endif