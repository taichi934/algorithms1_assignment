#include <stdio.h>

int main(void)
{
    char x;
    scanf("%c", &x);

    int char_size = 8;
    for (int i = char_size - 1; i >= 0; i--)
    {
        putchar(x >> i & 1U ? '1' : '0');
    }
    putchar('\n');
    return 0;
}