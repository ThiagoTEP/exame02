#include <unistd.h>

int main (int ac , char *av[])
{
    if(ac == 2)
    {
        int i = 0;
        while(av[1][i])
        {
            if(i != 0 && (av[1][i] >= 'A' && av[1][i] <= 'Z'))
            {
                write(1, "_", 1);
                av[1][i] += 32;
            }
                write(1, &av[1][i], 1);

            i++;
        }

    }
    write(1, "\n", 1);
    return 0;
}