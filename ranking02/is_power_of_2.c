int	    is_power_of_2(unsigned int n)
{
    int result;
    result = n / 2;
    if (result % 2 == 0)
        return 1;
    return 0;
}

#include <stdio.h>
int main()
{
	printf("%d", is_power_of_2(3));
}