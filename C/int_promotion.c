#include <stdio.h>

int main(void)
{
    unsigned char a = 0xff;
    char b = 0xff;
    size_t c = a==b; // true, or false?
    printf("A: %08x, B: %08x\n", a, b);
    printf("C: %zu\n",c);
}