int is_space(int c)
{
    return ((c >= 9 && c <=13) || c == 32);
}

int is_digit(int c)
{
    return (c >= '0' && c <= '9');
}

int	ft_atoi(const char *str)
{
    int res = 0;
    int i = 0;
    int sign = 1;

    while(is_space(str[i]))
        i++;
    if(str[i + 1] != '-' && str[i] == '+')
        i++;

     if(str[i] == '-')
        {
            sign = -1;
            i++;
        }
        
    while(is_digit(str[i]))
    {
        res = res * 10;
        res += str[i] - '0';
        i++;
    }
    return (res * sign);

}