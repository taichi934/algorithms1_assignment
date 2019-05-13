#include <stdio.h>

int main(void)
{
    int a, b, d;
    printf("Input a: \n");
    scanf("%d", &a);
    printf("Input b: \n");
    scanf("%d", &b);
    printf("Input c: \n");
    scanf("%d", &d);

    int c = 0;
    if (a % 3 != 0)
    {
        c++;
    }
    if (b % 3 != 0)
    {
        c++;
    }
    if (c % 3 != 0)
    {
        c++;
    }

    printf("3変数の中に３の倍数は%d子含まれています", c);

    return 0;
}