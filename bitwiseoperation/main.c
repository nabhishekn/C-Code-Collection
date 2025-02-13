//Final Result == 0x676869

#include <stdio.h>
unsigned int A;
unsigned char D = 0x67;
unsigned char E = 0x68;
unsigned char F = 0x69;
int main()
{
    A = (D << 16) | (E << 8) | (F);
    printf("%X\n", A);
   
    return 0;
}