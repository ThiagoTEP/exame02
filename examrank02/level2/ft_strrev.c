#include <stdio.h>

char    *ft_strrev(char *str)
{
    int i;
    int len;
    char tmp;

    len = 0;
    while(str[len])
        len++;

    while(i < len -1)
    {
        tmp = str[i];
        str[i] = str[len - 1];
        str[len - 1] = tmp;
        i++;
        len--;
    }
    return (str);
}


int main(void)
{
    char *s = "hello World";

    ft_strrev(s);
    printf("%s\n", s);
    return 0;
}