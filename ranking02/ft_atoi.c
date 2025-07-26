int	ft_atoi(const char *str)
{
    int result = 0;
    int sign = 1;
    int i = 0;

    while(str[i] >= 9 && str[i] <= 13 || str[i] == 32)
        i++;
    if (str[i] == '-')
    {
        sign = -1;
        i++;
    }
    else if (str[i] == '+')
        i++;
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return sign * result;   
}

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char *x = "55";
    char *a = "----5"; 
    char *b = "+-7";      
    char *d = "D";
    char *e = "-8655655";

    printf("Atoi = %d\nFT_atoi = %d\n------------\n", atoi(x), ft_atoi(x));
    printf("Atoi = %d\nFT_atoi = %d\n------------\n", atoi(a), ft_atoi(a));
    printf("Atoi = %d\nFT_atoi = %d\n------------\n", atoi(b), ft_atoi(b));
    printf("Atoi = %d\nFT_atoi = %d\n------------\n", atoi(d), ft_atoi(d));
    printf("Atoi = %d\nFT_atoi = %d\n------------\n", atoi(e), ft_atoi(e));

    return 0;
}
