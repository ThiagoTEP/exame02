#include  <unistd.h>

void ft_putstr(char *str)
{
    while(*str)
    {
        write(1, str, 1);
        str++;
    }
}

int main(int ac, char *av[])
{
    if(ac == 2)
    {
        char *c = av[1];
        ft_putstr(c);
    }
    return 0;
}