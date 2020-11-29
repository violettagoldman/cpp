#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <string.h>

static void	handle(char *file, char *s1, char *s2)
{
	std::ofstream			out;
	std::ifstream			in;
	std::string				line;
	std::string::size_type	n;

	in.open(file);
	if (in.fail())
	{
		std::cout << "Can't read input file\n";
		exit(-1);
	}
	out.open((std::string(file) + std::string(".replace")).c_str());
	if (out.fail())
	{
		std::cout << "Can't create output file\n";
		exit(-1);
	}
	while (std::getline(in, line))
	{	
		n = line.find(s1);
		while (n != std::string::npos)
		{
			line.replace(n, strlen(s1), s2);
			n = line.find(s1, n + strlen(s2));
		}
		out << line;
		if (line.size() > 0)
			out << std::endl;
	}
	out.close();
	in.close();
}

int			main(int argc, char **argv)
{
	if (argc != 4)
		std::cout << "Usage: ./replace <filename> <string to replace> <new string>\n";
	else if (!strlen(argv[2]) || !strlen(argv[3]))
		std::cout << "Strings can't be empty\n";
	else
		handle(argv[1], argv[2], argv[3]);
	return (0);
}
