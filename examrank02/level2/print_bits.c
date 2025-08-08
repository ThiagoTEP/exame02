#include <unistd.h>

void	print_bits(unsigned char octet)
{
    int i = 8;
    unsigned char bit = 0;
    while (i--)
    {
        bit = (octet >> i & 1) + 48;
        write(1, &bit, 1);
    }
}