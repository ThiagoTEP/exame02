int	    is_power_of_2(unsigned int n)
{
    int teste = 1;

    while (teste <= n)
    {
        if(teste == n)
            return 1;
        teste = teste * 2;
    }
    return 0;
}