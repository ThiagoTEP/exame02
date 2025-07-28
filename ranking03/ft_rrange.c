int     *ft_range(int start, int end)
{
    int i = 0;
    int len;

    if ((end - start) < 0)
        len = ((end - start) * -1) + 1;
    else
        len = (end - start) + 1;

    int *range = (int *)malloc(len*sizeof(int));
    
    while(i < len)
    {
        if (end < start)
            range[i] = end++;
        else
            range[i] = end--;
    }
    return (range);
}