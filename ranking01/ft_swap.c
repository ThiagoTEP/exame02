void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

#include <stdio.h>

int main (void)
{
	int a = 5;
	int b = 6;

	printf("antes a = %d, b = %d \n", a , b);

	ft_swap(&a, &b);

	printf("depois a = %d, b = %d \n", a , b);

	return 0;
}