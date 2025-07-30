#include <unistd.h>
#include <stdio.h>

int is_space(int c)
{
    return (c == ' ' || c == '\t');
}

int main (int ac , char *av[])
{
    if(ac > 1)
    {
        int i = 0;
        int len = 0;
        int start = 0;
        int in;
        int end;
        
        while (av[1][i] && is_space(av[1][i]))
            i++;
        in = i;
        while (av[1][i] && !(is_space(av[1][i])))
            i++;
        end = i;  
        while (av[1][i] && is_space(av[1][i]))
            i++;
        start = i;
        if (av[1][start] != 0)
        {
            while (av[1][len])
                len++;
            len--;
            while (av[1][len] && is_space(av[1][len]))
                len--;
            while (start <= len)
            {
                if(is_space(av[1][start]) && is_space(av[1][start + 1]) )
                    start++;
                else
                {
                    write(1, &av[1][start], 1);
                    start++;
                }
            }
            write(1, " ", 1);
            while (in < end)
            {

                write(1, &av[1][in], 1);
                in++;
            }
        }
        else
        {
            while (in < end)
            {

                write(1, &av[1][in], 1);
                in++;
            }
        }

    }
    write(1, "\n", 1);
    return 0;
}