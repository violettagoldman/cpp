#include <iostream>
#include <string.h>

void	printCapitalized(char *s)
{
	int len;
	int i;

	len = strlen(s);
	i = 0;
	while (i < len)
	{
		std::cout << (char)toupper(s[i]);
		i++;
	}
}

int main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			printCapitalized(argv[i]);
			i++;
		}
		std::cout << "\n";
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	return (0);
}
