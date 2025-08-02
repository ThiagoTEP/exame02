#include <unistd.h>
#include <stdio.h>

int main (int ac , char *av[])
{
    if (ac == 2)
    {
        int i = 0;
        int j;
        int n;

        while(av[1][i])
        {
            if (av[1][i] >= 'a' && av[1][i] <= 'z')
            {
                j = 0;
                n = av[1][i] - 96;
                while (j < n)
                {
                    write(1, &av[1][i], 1 );
                    j++;
                }

            }
            else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
            {
                j = 0;
                n = av[1][i] - 64;
                while (j < n)
                {
                    write(1, &av[1][i], 1 );
                    j++;
                }
            }
            
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}