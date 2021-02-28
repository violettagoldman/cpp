#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource: public IMateriaSource
{

	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource &src);
		virtual	~MateriaSource(void);

		MateriaSource		&operator=(const MateriaSource &src);
		void						learnMateria(AMateria *m);
		AMateria				*createMateria(const std::string &type);

	private:
		int				_current;
		AMateria	*_src[4];
};

#endif