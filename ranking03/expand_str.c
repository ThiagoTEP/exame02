#include <unistd.h>

int space(char c)
{
    return ((c >= 9 && c <= 13) || c == 32 );
}

int main (int ac , char *av[])
{
    if (ac == 2)
    {
        int i = 0;
        int j;
        int len = 0;

        while (av[1][i] && space(av[1][i]))
            i++;
        
        while (av[1][len])
            len++;
        len--;    
        while (av[1][len] && space(av[1][len]))
            len--;

        while(i <= len)
        {
            if (space(av[1][i]))
            {
                if (space(av[1][i]) && !(space(av[1][i+1])))
                {
                    j = 1;
                    while(j <= 3)
                    {
                    write(1, &av[1][i], 1);
                    j++;
                    }
                    i++;
                }
                else
                    i++;
            }
            else
            {
            write(1, &av[1][i], 1);
            i++;
            }
        }
    }
    write (1, "\n", 1);
    return 0;
}