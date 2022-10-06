#include <io.h>
#include <stdio.h>

unsigned char	swap_bits(unsigned char octet)
{
	return (octet << 4 | octet >> 4);
}

int main(void)
{
    unsigned char Byte;
    unsigned char tmp;
    int i;
    unsigned char tmp2;
    i = 7;
    Byte = 240;
    while (i >= 0)
    {
        tmp = ((Byte >> i) & 1) + '0';
        printf("%c", tmp);
        i--;
    }
    printf("\nnow swap the 4 right bits become the 4 left bits, the 4 left bits become the 4 right\n");
    tmp = swap_bits(240);
    i = 7;
    while (i >= 0)
    {
        tmp2 = ((tmp >> i) & 1) + '0';
        printf("%c", tmp2);
        i--;
    }
}