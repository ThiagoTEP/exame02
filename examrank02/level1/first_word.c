#include <unistd.h>
#include <stdio.h>

int main (int ac, char *av[])
{
    if(ac == 2)
    {    
        int i = 0;
        int start;
        int end;

        while(av[1][i] == ' ' || av[1][i] == '\t')
            i++;
        start = i;
        while(av[1][i] && (av[1][i] != ' ' && av[1][i] != '\t'))
            i++;
        end = --i;
        while (start <= end)
        {
            write(1, &av[1][start], 1);
            start++;
        }
    }
    write(1, "\n", 1);
    return 0;
}