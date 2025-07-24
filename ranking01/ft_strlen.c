
int	ft_strlen(char *str)
{
	int i = 0;
	
	while(str[i])
		i++;
	return (i);
}

#include <stdio.h>
int main(void)
{
	char *a = "teste de";

	printf("%d\n", ft_strlen(a));

	return 0;
}