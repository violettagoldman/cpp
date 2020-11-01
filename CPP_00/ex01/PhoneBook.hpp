#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.class.hpp"

# include <string>
# include <iostream>
# include <iomanip>

std::string		toUpper(std::string s);
void			getCommand(Contact contacts[8], int index);
void			addContact(Contact contacts[8], int *index);
void			searchContact(Contact contacts[8], int *index);
#endif
