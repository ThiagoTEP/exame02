int    ft_strcmp(char *s1, char *s2)
{
    int i = 0;
    while( s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
        i++;
        return (s1[i] - s2[i]);
}

#include <stdio.h>
#include <string.h>

int main(void)
{
    char *a = "amor grande";
    char *b = "amor gr";

    printf("strcmp = %d\nFT_strcmp = %d", strcmp(a, b), ft_strcmp(a , b));

    return 0;
}