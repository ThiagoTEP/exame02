#include <stdio.h>

char    *ft_strrev(char *str)
{
    int i;
    int len;
    char tmp;

    i = 0;
    len = 0;
    while(str[len])
        len++;
    while (i < len - i)
    {
        tmp = str[i];
        str[i] = str[len -1];
        str[len - 1] = tmp;
        i++;
        len--;
    }
    return (str);
}

int main(void)
{
    char x[] = "teste";
    
    printf("Antes: %s\n", x);

    ft_strrev(x);

    printf("Despois: %s\n", x);

    return 0;
}