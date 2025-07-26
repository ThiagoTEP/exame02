#include <stdio.h>
#include <string.h>

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
                return i;
            j++;
        }
        i++;
    }

    return i;
}



int main(void) {
    const char *s = "hello world!";
    const char *reject = " ";  // espaço e ponto de exclamação

    size_t pos = strcspn(s, reject);
    size_t ftpos = ft_strcspn(s, reject);

    printf("Primeiro caractere proibido está na posição: %zu\n_______\n", pos);
    printf("Primeiro caractere proibido está na posição: %zu\n-----------\n", ftpos);

    const char *s1 = "abcdefg123";
    const char *reject1 = "1234567890";

    printf("Primeiro caractere proibido está na posição: %zu\n_______\n", strcspn(s1, reject1));
    printf("Primeiro caractere proibido está na posição: %zu\n", ft_strcspn(s1, reject1));
    return 0;
}
