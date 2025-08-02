char    *ft_strcpy(char *s1, char *s2)
{
    int i = 0;

    while (s2[i])
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return s1;
}

#include <stdio.h>
int main (int ac, char *av[])
{
    char *c = av[1];
    char *d;
    ft_strcpy(d, c);
    printf("S2 = %s\nCopis S1 = %s", c, d);

    return 0;
}