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
        putchar(((x >> i) & 1U) ? '1' : '0');
    }
}

int main(void)
{

    int x, y;
    printf("x の値を入力してください:");
    scanf("%u", &x);
    printf("y の値を入力してください:");
    scanf("%u", &y);

    printf("\nxの２進数表記は");
    print_bits(x);
    printf("です");
    printf("\nyの２進数表記は");
    print_bits(y);
    printf("です");

    printf("\nxとyのANDは");
    print_bits(x & y);
    printf("です");
    printf("\nxとyのORは");
    print_bits(x | y);
    printf("です");
    printf("\nxとyのXORは");
    print_bits(x ^ y);
    printf("です");

    return 0;
}
