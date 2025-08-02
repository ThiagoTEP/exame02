#include <stdio.h>
#include <stdlib.h>

int main (int ac , char *av[])
{
    if(ac == 4)
    {
        int a = atoi(av[1]);
        int b = atoi(av[3]);

        if (av[2][0] == '+' && av[2][1] == '\0')
            printf("%d", a + b);
        else if (av[2][0] == '-' && av[2][1] == '\0')
            printf("%d", a - b);
        else if (av[2][0] == '*' && av[2][1] == '\0')
            printf("%d", a * b);
        else if (av[2][0] == '/' && av[2][1] == '\0')
            printf("%d", a / b);
        else if (av[2][0] == '%' && av[2][1] == '\0')
            printf("%d", a % b);
    }
    printf("\n");
    return 0;
}