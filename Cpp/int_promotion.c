#include <stdio.h>

int main(void)
{
    unsigned char a = 0xff;
    char b = 0xff;
    int c = a==b; // true, or false? Integer promotion happens and a & b are wuldly different now
    
   
    printf("A: %08x, B: %08x\n", a, b);
    printf("C: %d\n",c);
}