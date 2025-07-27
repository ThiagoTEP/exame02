int		max(int* tab, unsigned int len)
{
    int count = 0;
    int result = 0;
    int i = 0;
    
    if (len > 0)
    {
        while(count < len)
        {
            if (tab[i] > result)
                result = tab[i];
            i++;
            count++;
        }
        return result;
    }
    return 0;
}

#include <stdio.h>

int main(void)
{
    int tab[] = {0, 2 , 5, 10 , 15 , 6, 3};
    
    printf("Maior numero: %d\n", max(tab, 7));
    return 0;
}