#include "PhoneBook.hpp"

Contact::Contact(void){};

Contact::~Contact(void){};

void		Contact::print(void)
{
	std::cout << "First name: " << this->_firstName << std::endl;
	std::cout <<  "Last name: " << this->_lastName << std::endl;
	std::cout << "Nickname: " << this->_nickname << std::endl;
	std::cout << "Login: " << this->_login << std::endl;
	std::cout << "Postal address: " << this->_postalAddress << std::endl;
	std::cout << "Mail: " << this->_emailAddress << std::endl;
	std::cout << "Phone: " << this->_phoneNumber << std::endl;
	std::cout << "Birthday: " << this->_birthdayDate << std::endl;
	std::cout << "Favorite meal: " << this->_favoriteMeal << std::endl;
	std::cout << "Underwear color: " << this->_underwearColor << std::endl;
	std::cout << "Darkest secret: " << this->_darkestSecret << std::endl;
}


std::string	Contact::getFirstName(void) const
{
	return (this->_firstName);
}

std::string	Contact::getLastName(void) const
{
	return (this->_lastName);
}

std::string	Contact::getNickname(void) const
{
	return (this->_nickname);
}

void		Contact::setFirstName(std::string firstName)
{
	this->_firstName = firstName;
}

void		Contact::setLastName(std::string lastName)
{
	this->_lastName = lastName;
}

void		Contact::setNickname(std::string nickname)
{
	this->_nickname = nickname;
}

void		Contact::setLogin(std::string login)
{
	this->_login = login;
}

void		Contact::setPostalAddress(std::string postalAddress)
{
	this->_postalAddress = postalAddress;
}

void		Contact::setEmailAddress(std::string emailAddress)
{
	this->_emailAddress = emailAddress;
}

void		Contact::setPhoneNumber(std::string phoneNumber)
{
	this->_phoneNumber = phoneNumber;
}

void		Contact::setBirthdayDate(std::string birthdayDate)
{
	this->_birthdayDate = birthdayDate;
}

void		Contact::setFavoriteMeal(std::string favoriteMeal)
{
	this->_favoriteMeal = favoriteMeal;
}

void		Contact::setUnderwearColor(std::string underwearColor)
{
	this->_underwearColor = underwearColor;
}

void		Contact::setDarkestSecret(std::string darkestSecret)
{
	this->_darkestSecret = darkestSecret;
}
