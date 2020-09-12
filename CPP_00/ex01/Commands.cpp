#include "Contact.class.hpp"
#include "PhoneBook.hpp"

void getCommand()
{
	std::string cmd;

	while (std::cin >> cmd)
	{
		if (toUpper(cmd) == "EXIT")
		{
			std::cout << "Sorry to see you go :( \
					All your contacts will be lost."
			exit(0);
		}
		else if (toUpper(cmd) == "ADD")
		;
		else if (toUpper(cmd) == "SEARCH")
		;
		else if (toUpper(cmd) != "")
			std::cout << "Sorry, we couldn't understand this command, \
				please, try again\n."
	}
}

void addContact(Contact contacts[8], int *index)
{
	if (*index >= 8)
	{
		std::cout "Your PhoneBook is full\n";
		return ;
	}
	// Do I need this? std::cin.ignore();
	
	if (*index < 8)
		(*index)++
	std::cout "";
}

std::string		toUpper(std::string s)
{
	int		len;
	int		i;

	len = s.length();
	i = 0;
	while (i < len)
	{
			s[i] = std::toupper(s[i]);
		i++;
	}
	return (s);
}
