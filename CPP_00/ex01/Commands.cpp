#include "PhoneBook.hpp"

void getCommand(Contact contacts[8], int index)
{
	std::string cmd;

	while (std::cout << "Enter a command: " && std::cin >> cmd)
	{
		cmd = toUpper(cmd);
		if (cmd == "EXIT")
		{
			std::cout << "Sorry to see you go :( ";
			std::cout << "All your contacts will be lost.";
			exit(0);
		}
		else if (cmd == "ADD")
			addContact(contacts, &index);
		else if (cmd == "SEARCH")
			searchContact(contacts, &index);
		else if (cmd != "")
		{
			std::cout << "Sorry, we couldn't understand this command,";
			std::cout << " please, try again.\n";
		}
	}
}

static Contact	addContactHelper(std::string type, Contact current)
{
	std::string	input;

	std::cout << std::setw(15) << type << ": \n";
	//std::cin.ignore();
	std::getline(std::cin, input);
	//std::cin.ignore();
	if (type == "First name")
		current.setFirstName(input);
	else if (type == "Last name")
		current.setLastName(input);
	else if (type == "Nickname")
		current.setNickname(input);
	else if (type == "Login")
		current.setLogin(input);
	else if (type == "Postal address")
		current.setPostalAddress(input);
	else if (type == "Email address")
		current.setEmailAddress(input);
	else if (type == "Phone number")
		current.setBirthdayDate(input);
	else if (type == "Favorite meal")
		current.setFavoriteMeal(input);
	else if (type == "Underwear color")
		current.setUnderwearColor(input);
	else if (type == "Darkest secret")
		current.setDarkestSecret(input);
	return (current);
}

void addContact(Contact contacts[8], int *index)
{
	Contact		current;
	std::string	buffer;
	if (*index >= 8)
	{
		std::cout << "Your PhoneBook is full\n";
		return ;
	}
	std::cin.ignore();
	current = addContactHelper("First name", current);
	current = addContactHelper("Last name", current);
	current = addContactHelper("Nickname", current);
	current = addContactHelper("Login", current);
	current = addContactHelper("Postal address", current);
	current = addContactHelper("Email address", current);
	current = addContactHelper("Phone number", current);
	current = addContactHelper("Favorite meal", current);
	current = addContactHelper("Underwear color", current);
	current = addContactHelper("Darkest secret", current);
	contacts[*index] = current;
	if (*index < 8)
		(*index)++;
	std::cout << "\nThe contact was successfully added in new PhoneBook!\n";
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
