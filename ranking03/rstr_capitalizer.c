#include <unistd.h>

void ft_putstr(char *str)
{
	int i = 0;
	while(str[i])
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if((str[i] >= 'a' && str[i] <= 'z') && (str[i+1] == ' ' || str[i+1] == '\0'))
			str[i] -= 32;
		write(1, &str[i], 1);
		i++;
	}
}


int main (int ac, char *av[])
{	
	if (ac > 1)
	{
		int i = 1;
		while (i < ac)
		{
			ft_putstr(av[i]);
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}