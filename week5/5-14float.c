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
        putchar((x >> i) & 1U ? '1' : '0');
    }
}

int main(void)
{
    do
    {
        float f;
        scanf("%f", &f);
        print_bits(f);
    } while (1);
    return 0;
}

//let's just put it aside for a minite and never remember.
