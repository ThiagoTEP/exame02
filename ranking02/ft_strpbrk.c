#include <stdlib.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
    int i = 0;
    int j = 0;
    char *re = (char *)s1;

    while(s1[i])
    {
        j = 0;
        while(s2[j])
        {
            if (s1[i] == s2[j])
                return re;
            j++;
        }
        i++;
        re++;
    }
    return (NULL);
}

#include <stdio.h>
#include <string.h>

int main(void)
{
    const char *s1 = "exemplo de string";
    const char *s2 = "xel";

    char *res1 = strpbrk(s1, s2);  
    char *res2 = ft_strpbrk(s1, s2);   

    printf("strpbrk:     ");
    if (res1)
        printf("'%c' encontrado em \"%s\"\n", *res1, res1);
    else
        printf("Nenhum caractere encontrado.\n");

    printf("ft_strpbrk:  ");
    if (res2)
        printf("'%c' encontrado em \"%s\"\n", *res2, res2);
    else
        printf("Nenhum caractere encontrado.\n");


    return 0;
}