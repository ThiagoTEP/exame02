#include <unistd.h>

int main(int ac, char *av[])
{
	if (ac == 2)
	{
		unsigned int i;

		i = 0;
		while(av[1][i] == 32 || av[1][i] == 9)
			i++;
		while ((av[1][i] != 32 && av[1][i] != 9) && av[1][i])
			write(1, &av[1][i++], 1);
	}
	write(1, "\n", 2);
	return (0);
}