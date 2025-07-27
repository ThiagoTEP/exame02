#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nbr)
{
    unsigned int nb;

    if(nbr < 0)
    {
        ft_putchar('_');
        nb = -nbr;
    }
    else
        nb = nbr;
    if (nb >= 10)
        ft_putnbr(nb / 10);
    ft_putchar(nb % 10 + '0');
}

int is_prime(int nbr)
{
    if (nbr < 2)
        return 0;
    int i = 2;
    while(i <= nbr /2)
    {
        if(nbr % i == 0)
            return 0;
        i++;
    }
    return 1;
}

int ft_atoi(char *str)
{
    int result = 0;
    int sign = 1;
    int i = 0;

    while((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
        i++;
    if (str[i] == '-')
    {
        sign = -1;
        i++;
    }
    else if (str[i] == '+')
        i++;
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return sign * result; 

}

int main(int ac, char *av[])
{
    if(ac != 2 || ft_atoi(av[1]) <= 0)
    {
        write(1, "0\n", 2);
        return 0;
    }
    int n = ft_atoi(av[1]);
    int sum =  0;
    while(n > 1)
    {
        if (is_prime(n))
            sum += n;
        n--;
    }
    ft_putnbr(sum);
    ft_putchar('\n');
    return 0;
}