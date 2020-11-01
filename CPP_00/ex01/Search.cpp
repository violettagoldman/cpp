#include "PhoneBook.hpp"
#include <cstdlib>

static std::string	truncate(std::string str)
{
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return str;
}

static void			printContacts(Contact contacts[8], int *index)
{
	int i;

	i = 0;
	std::cout << " ___________________________________________" << std::endl;
	std::cout << "|" << std::setw(10) << std::right << "Index";
	std::cout << "|" << std::setw(10) << std::right << "First name";
	std::cout << "|" << std::setw(10) << std::right << "Last name";
	std::cout << "|" << std::setw(10) << std::right << "Nickaname" << "|" << std::endl;
	std::cout << " ‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾" << std::endl;
	while (i < *index)
	{
		std::cout << "|" << std::setw(10) << std::right << i << "|";
		std::cout << std::setw(10) << std::right << truncate(contacts[i].getFirstName()) << "|";
		std::cout << std::setw(10) << std::right << truncate(contacts[i].getLastName()) << "|";
		std::cout << std::setw(10) << std::right << truncate(contacts[i].getNickname()) << "|";
		std::cout << std::endl;
		std::cout << " ‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾" << std::endl;
		i++;
	}
}

void				searchContact(Contact contacts[8], int *index)
{
	std::string	input;
	int			n;

	if (*index == 0)
	{
		std::cout << "You have not added any contact by now. " <<
		"Tap ADD if you want to add one\n";
		return;
	}
	printContacts(contacts, index);
	std::cin.ignore();
	std::cout << "Enter the contact's index: ";
	std::getline(std::cin, input);
	for (size_t i = 0; i < input.size(); i++)
	{
		if (input[i] < '0' || input[i] > '9')
		{
			std::cout << "Not a valid index\n";
			return ;
		}
	}
	n = std::atoi(input.c_str());
	if (n < 0 || n > 8)
		std::cout << "Such index does not exist\n";
	else
	{
		if (n >= 0 && n < *index)
		{
			contacts[n].print();
			std::cout << std::endl;
		}
		else
			std::cout << "You do not have such a contact!\n";
	}
}
