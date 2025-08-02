void	ft_swap(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

#include <stdio.h>
#include <stdlib.h>

int main (int ac, char *av[])
{
    int d = atoi(av[1]);
    int e = atoi(av[2]);

    printf("antes a = %d, b = %d\n", d , e);
    ft_swap(&d, &e);
    printf("depois a = %d, b = %d", d , e);

    return 0;
}