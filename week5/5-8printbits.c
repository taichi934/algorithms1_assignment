#include <stdio.h>

int count_bits(unsigned x)
{
    int bits = 0;
    while (x)
    {
        if (x & 1U)
            bits++;
        x >>= 1;
    }
    return bits;
}

int int_bits(void)
{
    return count_bits(~0U);
}

void print_bits(unsigned x)
{
    for (int i = int_bits() - 1; i >= 0; i--)
    {
        if ((x >> i) & 1U)
        {
            putchar('1');
        }
        else
        {
            putchar('0');
        }
    }
}

int main(void)
{

    return 0;
}