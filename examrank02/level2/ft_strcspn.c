#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
    int i = 0;
    int j;

    while(s[i])
    {
        j = 0;
        while(reject[j])
        {
            if(s[i] == reject[j])
            {
                return(i);
               
            }
            j++;
        }
        i++;
    }
    return (i);

}

#include <string.h>
int main(void)
{
    char *a = "abc123de123";
    char *r = "123";


    printf("original = %ld\n", strcspn(a, r));

    printf("funcao = %ld\n", ft_strcspn(a, r));

    return (0);
}