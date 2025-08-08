#include <stdio.h>

size_t	ft_strspn(const char *s, const char *accept)
{
    int i;
    int j;
    int check;

    i = 0;
    while(s[i])
    {
        j = 0;
        check = 0;
        while (accept[j])
        {
            if (s[i] == accept[j])
                check = 1;
            j++;
        }
        if(check == 0)
            return(i);
        i++;
    }
    return (i);
}

#include <string.h>
int main(void)
{
    char *a = "abc123de123";
    char *ac = "abcde";


    printf("original = %ld\n", strspn(a, ac));

    printf("funcao = %ld\n", ft_strspn(a, ac));

    return (0);
}