int		max(int* tab, unsigned int len)
{
    int result = 0;
    int i = 0;
    
    if (len > 0)
    {
        while(i < len)
        {
            if(tab[i] > result)
                result = tab[i];
            i++;
        }
        return result;
    }
    return 0;
}

#include <stdio.h>

int main()
{
	int int_tab[] = {1, 3, 2, 10, 9, 12, 4, 22};
	printf("%d", max(int_tab, 8));
}