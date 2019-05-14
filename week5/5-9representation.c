#include <stdio.h>

void toBinary(int x)
{
    int reversedResult[8] = {};
    for (int i = 0; i < 8; i++)
    {
        reversedResult[i] = x % 2;
        x /= 2;
    }
    for (int i = 7; i >= 0; i--)
    {
        printf("%d", reversedResult[i]);
    }
    printf("\n");
}

int main(void)
{
    int x;
    scanf("%d", &x);
    printf("xの2進数表記：0b");
    toBinary(x);
    printf("xの8進数表記：0o%o\n", x);
    printf("xの16進数表記：0x%X\n", x);

    return 0;
}