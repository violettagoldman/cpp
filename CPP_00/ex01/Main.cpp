#include "PhoneBook.hpp"

void welcomeMessagePrint()
{
	std::cout << "                  MMMMMMMMMMMMMMMMMMMMMMM\n";
	std::cout << "             MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n";
	std::cout << "          MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n";
	std::cout << "       MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n";
	std::cout << "     =MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n";
	std::cout << "   MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMO\n";
	std::cout << "  MMMMMMMMMMMMMMMMMMMMMMM7       7MMMMMMMMMMMMMMMMMMMMMMM\n";
	std::cout << " MMMMMMMMMMMMMMM    MMM7            MMM    MMMMMMMMMMMMMMM\n";
	std::cout << "MMMMMMMMMMMMMMMM    MMMM           7MMM    MMMMMMMMMMMMMMMM\n";
	std::cout << "MMMMMMMMMMMMMMMM   MMMMM           MMMMM   MMMMMMMMMMMMMMMM7\n";
	std::cout << "MMMMMMMMMMMMMMM7   MMMMMMMMMMMMMMMMMMMMM    MMMMMMMMMMMMMMM\n";
	std::cout << " MMMMMMMMMMMMMO   MMMMMMMMMMMMMMMMMMMMMMM   =MMMMMMMMMMMMM\n";
	std::cout << "  MMMMMMMM       MMMMMMMMMMMMMMMMMMMMMMMMMO      MMMMMMMM\n";
	std::cout << "                MMMMMMMMMMMMMMMMMMMMMMMMMMMM\n";
	std::cout << "               MMMMMM     M     M     MMMMMMM\n";
	std::cout << "              MMMMMMM    MMM   =MM    MMMMMMMM\n";
	std::cout << "             MMMMMMMMM   MMM   MMMI  MMMMMMMMMM\n";
	std::cout << "            MMMMMMMMM     M     M     MMMMMMMMMM\n";
	std::cout << "           MMMMMMMMMMM   MMM   MMM   IMMMMMMMMMMM\n";
	std::cout << "          MMMMMMMMMMM=   MMM   MMM    MMMMMMMMMMM7\n";
	std::cout << "         MMMMMMMMMMMM     M     M     MMMMMMMMMMMM\n";
	std::cout << "        MMMMMMMMMMMMMM  =MMM   MMMI  MMMMMMMMMMMMMM\n";
	std::cout << "       MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n";
	std::cout << "       MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n";
	std::cout << "        MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n";
	std::cout << "        MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n";
	std::cout << "        =MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n";
	std::cout << "          MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n";
	std::cout << "           MMMMMMMMM                   MMMMMMMMM\n";
	std::cout << "\n\nWelcome to the PhoneBook by vgoldman\n";
	std::cout << "You can ADD and SEARCH commands. Tap EXIT to exit.\n";

}

int main(void)
{
	int index;

	index = 0;
	welcomeMessagePrint();
	Contact contacts[8];
	getCommand(contacts, index);
}
