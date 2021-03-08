#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <cctype>
#include <math.h>
#include <climits>

std::string		prepString(char *str)
{
	std::string		toConvert;
	int				size(0);
	int				begin(0);

	// skip whitespaces
	while (str[begin] && std::isspace(str[begin]))
		++begin;
	// count the size of the string
	while (str[begin + size] && !std::isspace(str[begin + size]))
		++size;

	toConvert = std::string(str, begin, size);
	return (toConvert);
}

void	toChar(double conversion)
{
	std::cout << "char:   ";
	if (conversion < CHAR_MIN || conversion > CHAR_MAX || isnan(conversion))
		std::cout << "impossible\n";
	else if (std::isprint(conversion))
		std::cout << static_cast<unsigned char>(conversion) << std::endl;
	else
		std::cout << "non displayable\n";
}

void	toInt(double conversion)
{
	std::cout << "int:    ";
	if (conversion >= INT_MIN && conversion <= INT_MAX && !isnan(conversion) && !isinf(conversion))
		std::cout << static_cast<int>(conversion) << std::endl;
	else
		std::cout << "impossible\n";
}

void	toFloat(double conversion)
{
	int		flag;

	flag = 0;
	if (conversion == static_cast<int>(conversion))
		flag = 1;
	std::cout << "float:  ";
	if (isnan(conversion))
		std::cout << "nan";
	else if (isinf(conversion))
		std::cout << (conversion < 0 ? "-" : "") << "inf";
	else
	{
		if (flag)
			std::cout << std::setprecision(1) << std::fixed << static_cast<float>(conversion);
		else
			std::cout << static_cast<float>(conversion);
	}
	std::cout << "f\n";
}

void	toDouble(double conversion)
{
	int		flag;

	flag = 0;
	if (conversion == static_cast<int>(conversion))
		flag = 1;
	std::cout << "double: ";
	if (isnan(conversion))
		std::cout << "nan\n";
	else if (isinf(conversion))
		std::cout << (conversion < 0 ? "-" : "") << "inf\n";
	else
	{
		if (flag)
			std::cout << std::setprecision(1) << std::fixed << conversion << std::endl;
		else
			std::cout << conversion << std::endl;
	}
}

void	convert(std::string str)
{
	double	conversion; // 64-bit binary

	std::cout << "-> " << str << std::endl;
	// check for strings and chars
	if (str.length() == 1 && std::isprint(str[0]) && !std::isdigit(str[0]))
		conversion = str[0];
	else
	{
		try
		{
			conversion = std::stod(str);
		}
		catch(std::exception &e)
		{
			std::cout << "char:   impossible\n";
			std::cout << "int:    impossible\n";
			std::cout << "float:  impossible\n";
			std::cout << "double: impossible\n";
			return ;
		}
	}
	toChar(conversion);
	toInt(conversion);
	toFloat(conversion);
	toDouble(conversion);
}

int		main(int argc, char **argv)
{
	if (argc == 1)
	{
		convert(std::string("0"));
		convert(std::string("nan"));
		convert(std::string("42.0f"));
	}
	else if (argc != 2)
	{
		std::cout << "Usage: ./convert <number to convert>";
	}
	else
		convert(prepString(argv[1]));
}