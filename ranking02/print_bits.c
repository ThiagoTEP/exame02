#include <unistd.h>

void	print_bits(unsigned char octet)
{
    int i = 8;
    unsigned char bit = 0;

    while(i--)
    {
        bit = (octet >> i & 1) + 48;
        write(1, &bit, 1);
    }
}

#include <stdlib.h>
int main(int ac, char *av[])
{
    if (ac == 2)
    {
        int n = atoi(av[1]);
        print_bits((unsigned char)n);
    }
    write(1, "\n", 1);
    return 0;
}