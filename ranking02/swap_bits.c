#include <stdio.h>

unsigned char	swap_bits(unsigned char octet)
{
    return((octet >> 4 | octet << 4));
}

void	print_bits(unsigned char byte)
{
	for (int i = 7; i >= 0; i--)
	{
		char bit = ((byte >> i) & 1) + '0';
		putchar(bit);
	}
}



int main(void)
{
	unsigned char original = 0b00100110; // 0x26 → 0010 0110
	unsigned char swapped = swap_bits(original); // Esperado: 0110 0010

	printf("Original: ");
	print_bits(original);
	printf("\n");

	printf("Swapped : ");
	print_bits(swapped);
	printf("\n");

	return 0;
}

