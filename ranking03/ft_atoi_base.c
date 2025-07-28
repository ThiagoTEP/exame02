int isspace(int c)
{
    if ((c >= 9 && c <= 13) || c == 32)
        return 1;
    return 0;
}

int isvalid(int ch , int baselen)
{
    char *lcbase = "0123456789abcdef";
    char *ucbase = "0123456789ABCDEF";
    int i =  0;

    while( i < baselen)
    {
        if(ch == lcbase[i] || ch == ucbase[i])
            return 1;
        i++;
    }
    return 0;
}

int ft_atoi_base(const char *str, int str_base)
{
    int res = 0;
    int sign =  0;
    int i = 0;

    while (isspace(str[i]))
        i++;
    
    if (str[i] == '+' && str[i+1] != '-' )
        i++;

    if (str[i] == '-')
    {
        sign = -1;
        i++;
    }

    while(str[i] && isvalid(str[i], str_base))
    {
        res *= str_base;
        if (str[i] >= '0' && str[i] <= 9)
            res += str[i] - '0';
        else if (str[i] >= 'a' && str[i] <= 'f')
            res += str[i] - 'a' + 10;
        else if (str[i] >= 'A' && str[i] <= 'F')
            res += str[i] - 'A' + 10;
        i++;
    }
    return (res * sign);
}

#include <stdio.h>

int main (int ac, char *av[])
{
    if(ac == 3)
    {
        printf("%d", ft_atoi_base(av[1], ft_atoi_base(av[2], 10)));
        return 0;
    }
    return 0;
}