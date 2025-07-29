#include <unistd.h>

void ft_putnbr(int nbr)
{
	long num;
	
	num = nbr;
	if (num >= 10)
		ft_putnbr(num /10);
	char nbr1 = num % 10 + '0';
	write(1, &nbr1, 1);

}
int	ft_atoi(const char *str)
{
    int result = 0;
    int i = 0;

    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return result;   
}

int main (int ac, char *av[])
{
	if(ac == 2)
	{
		int num = ft_atoi(av[1]);
		int i = 1;
		while(i < 10)
		{
			 ft_putnbr(i);
            write(1, " x ", 3);
            ft_putnbr(num);
            write(1, " = ", 3);
            ft_putnbr(i * num);
            write(1, "\n", 1);
            i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}