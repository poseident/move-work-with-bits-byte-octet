#include <io.h>

unsigned char   reverse_bits(unsigned char Byte)
{
   return(((Byte >>0) & 1) << 7) | \
        (((Byte >> 1) & 1) << 6) | \
        (((Byte >> 2) & 1) << 5) | \
        (((Byte >> 3) & 1) << 4) | \
        (((Byte >> 4) & 1) << 3) | \
        (((Byte >> 5) & 1) << 2) | \
        (((Byte >> 6) & 1) << 1) | \
        (((Byte >> 7) & 1) << 0) ;

}

int main(void)
{
	unsigned char Byte;
	char bit;
    int h;
	int i;
	unsigned char k;

	Byte = 1;
    h = 8;       
	write(1, "1 in 8 bits :\n", 14);   
    while (--h >= 0)               
    {                                    
        bit = ((Byte >> h) & 1) + '0';  
        write(1, &bit, 1);                
	}
	write(1, "\n\n", 2);
	k = reverse_bits(Byte);

	i = 7;
	write(1, "1 in 8 bits reversed\n", 21);
	while (i >= 0)
	{
		if (k >> i & 1)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		i--;
	}
}