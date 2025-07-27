#include <unistd.h>

int main( int ac, char *av[])
{
    if(ac == 3)
    {
        int i = 0;
        int j = 0;
  
        while (av[2][i])
        {
            while (av[2][i] == av[1][j])
            {
                if(av[1][j + 1] == '\0')
                {
                    j = 0;
                    while (av[1][j])
                    {
                        write(1, &av[1][j], 1);
                        j++;
                    }
                }
                j++;
           } 
           
                i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}