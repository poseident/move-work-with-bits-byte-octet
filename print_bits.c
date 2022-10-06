#include <stdio.h>

int main(void)
{
    unsigned char Byte;
    unsigned char tmp;
    int i;

    i = 7;
    Byte = 128;
    printf("128 then should be 10000000\n");
    while (i >= 0)
    {
        tmp = ((Byte >> i) & 1) + '0';
        printf("%c", tmp);
        i--;
    }
}