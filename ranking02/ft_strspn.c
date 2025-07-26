#include <stdio.h>
#include <string.h>

size_t	ft_strspn(const char *s, const char *accept)
{
    int i = 0;
    int j;
    int found;

    while (s[i])
    {
        found = 0;
        j = 0;
        while (accept[j])
        {
            if (s[i] == accept[j])
            {
                found = 1;
                break;
            }
            j++;
        }
        if (!found)
            break;
        i++;
    }
    return i;
}
   
int main(void)
{
    const char *s = "abcde12345";
    const char *accept = "abcde";

    size_t len = strspn(s, accept);
    size_t ftlen = ft_strspn(s, accept);


    printf("Número de caracteres válidos no início: %zu\n", len);
    printf("Número de caracteres válidos no início: %zu\n", len);

    char *s1 = "hello";
	const char *accept1 = "jfkhpellh";

    printf("%zu\n", strspn(s1, accept1));
	printf("%zu\n", ft_strspn(s1, accept1));

    char *s2 = "hello";
	const char *accept2 = "a";

    printf("%zu\n", strspn(s2, accept2));
	printf("%zu\n", ft_strspn(s2, accept2));


    return 0;
}