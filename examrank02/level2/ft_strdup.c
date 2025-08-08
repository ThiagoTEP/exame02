#include <stdlib.h>

char    *ft_strdup(char *src)
{
    char *tmp;
    int len;
    int i;

    len = 0;
    while(src[len])
        len++;

    tmp = (char *)malloc(sizeof(char) * len + 1);
    if(!tmp)
        return NULL;
    i = 0;

    while(src[i])
    {
        tmp[i] = src[i];
        i++;
    }
    tmp[i] = '\0';
    return (tmp);
}

#include <stdio.h>

int main(void)
{
    char *a = "teste copia";
    char *c;

    c =  ft_strdup(a);

    printf("original = %s\n", a);
    printf("copia = %s\n", c);
    return 0;
}