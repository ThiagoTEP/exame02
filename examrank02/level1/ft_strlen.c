int	ft_strlen(char *str)
{
    int i = 0;
    while(str[i])
        i++;
    return i;
}

#include <stdio.h>

int main (int ac, char *av[])
{
    char *c = av[1];
    
    printf("tamanho da string = %s\né = %i", c, ft_strlen(c));
    return 0; 
}