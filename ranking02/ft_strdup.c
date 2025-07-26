#include <stdlib.h>

char    *ft_strdup(char *src)
{
    char *tmp;
    int i;
    int len;

    while(src[len])
        len++;
    tmp = malloc(sizeof(char)* len +1);
    if(!tmp)
        return(NULL);
    i = 0;
    while(src[i])
    {
        tmp[i] = src[i];
        i++;
    }
    tmp[i] = '\0';
    return tmp;
}

#include <stdio.h>
#include <string.h>

int main(void)
{
    char *a = "teste de string";
    char *bcopia = ft_strdup(a);
    char *ccopia = strdup(a);

    printf("String original e endereco = %s -> %p\n-----\n", a , &a);
    printf("String FT copia e endereco = %s -> %p\n-----\n", bcopia , &bcopia);
    printf("String  copia e endereco = %s -> %p\n-----\n", ccopia , &ccopia);
    return 0;
}