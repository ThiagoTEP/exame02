int is_space(int c)
{
    return((c >= 9 && c <= 13) || c == 32);
}

int is_digit(int c)
{
    return(c >= '0' && c <= '9');
}

int is_hex(int c, int str_base)
{
    char *lcase = "0123456789abcdef";
    char *ucase = "0123456789ABCDEF";
    int i = 0;

    while (i < str_base)
    {
        if(c == lcase || c == ucase)
            return 1;
        i++;
    }
    return 0;
}

int	ft_atoi_base(const char *str, int str_base)
{
    int res;
    int sign = 1;
    int i = 0;

    while (str[i] && is_space(str[i]))
        i++;
    
    if(str[i] == '+' && str[i + 1] != '-' )
        i++;

    if (str[i] == '-')
    {
        sign = -1;
        i++;
    }

    while (str[i] && is_hex(str[i], str_base) )
    {
        res *= str_base;
        if (is_digit(str[i]))
        {
            res+= str[i] - '0';
        }
        else if (str[i] >= 'a' && str[i] <= 'f')
            res += str[i] - 'a' + 10;
        else if (str[i] >= 'A' && str[i] <= 'F')
            res += str[i] - 'A' + 10;
        i++;
        
    }
    return (res *sign);
}