#include <unistd.h>

int main (int argc, char *argv[])
{
	if (argc == 2)
	{
		int i = 0;
		int j;
		while(argv[1][i])
		{
			j = 0;
			if(argv[1][i] >= 65 && argv[1][i] <= 90)
			{
			while(j < argv[1][i] - 64)
			{
				write(1,&argv[1][i],1 );
				j++;
			}
			}
			else if(argv[1][i] >= 97 && argv[1][i] <= 122)
			{
			while(j < argv[1][i] - 96)
			{
				write(1,&argv[1][i],1 );
				j++;
			}
			} 
			else
				write(1,&argv[1][i],1 );
			

			i++;
		}
	}
	else
		write(1, "\n", 1);

	return 0;
}
