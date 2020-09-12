#include "Contact.hpp"

//Contact::Contact(void){};

//Contact::~Contact(void){};

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
