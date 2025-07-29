#include <stdlib.h>

char *converter(char *s, int len, long int n)
{
	while(n>0)
	{
		s[len] = '0' + (n%10);
		n/=10;
		len--;
	}
	return s;
}

int int_len(long int li)
{
	int i = 0;
	if(li == 0)
		return 1;
	if (li < 0)
	{
		i++;
		li *= -1;
	}
	while (li > 0)
	{
		i++;
		li /=10;
	}
	return i;
}

char *ft_itoa(int nbr)
{
	long int li = nbr;
	int len = int_len(li);
	char *s = (char *)malloc(len + 1);
	if (!s)
		return  NULL;
	s[len--] = '\0';
	if (nbr == 0)
		s[0] = '0';
	if (li < 0)
	{
		s[0] = '-';
		li *= -1;
	}
	return s = converter(s, len, li);
}