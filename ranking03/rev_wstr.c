#include <unistd.h>

int is_ver(int c)
{
    return ((c == ' ' || c == '\t'));
}

int main (int ac , char *av[])
{
    if (ac == 2)
    {
        int i;
        int j = 0;
        int len = 0;
       
        while (av[1][j])
            j++;
        len = j--;
        while (j >= 0)
        {
            if (j == 0 && !(is_ver(av[1][j]))) 
            {
                i = 0;
                while(!(is_ver(av[1][i])) && av[1][i] != '\0')
                {
                    write(1, &av[1][i], 1);
                    i++;
                }
            }
            else if(is_ver(av[1][j]))
            {
                i = j+1;
                while(!(is_ver(av[1][i])) && i < len)
                {
                    write(1, &av[1][i], 1);
                    i++;
                }
                write(1, " ", 1);             
            }
            j--;
        }
    }
    write(1, "\n", 1);
    return 0;
}