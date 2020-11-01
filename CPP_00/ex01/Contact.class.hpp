#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact
{
	public:
		Contact();
		~Contact();

		std::string		getFirstName(void) const;
		std::string		getLastName(void) const;
		std::string		getNickname(void) const;
		void			setFirstName(std::string firstName);
		void			setLastName(std::string lastName);
		void			setNickname(std::string nickname);
		void			setLogin(std::string login);
		void			setPostalAddress(std::string postalAddress);
		void			setEmailAddress(std::string emailAddress);
		void			setPhoneNumber(std::string phoneNumber);
		void			setBirthdayDate(std::string birthdayDate);
		void			setFavoriteMeal(std::string favoriteMeal);
		void			setUnderwearColor(std::string underwearColor);
		void			setDarkestSecret(std::string darkestSecret);
		void			print();

	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickname;
		std::string	_login;
		std::string	_postalAddress;
		std::string	_emailAddress;
		std::string	_phoneNumber;
		std::string	_birthdayDate;
		std::string	_favoriteMeal;
		std::string	_underwearColor;
		std::string	_darkestSecret;
};

#endif
