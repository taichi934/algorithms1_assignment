#include <stdio.h>

int main(void)
{
    int a, b, c;
    printf("Input a: \n");
    scanf("%d", &a);
    printf("Input b: \n");
    scanf("%d", &b);
    printf("Input c: \n");
    scanf("%d", &c);

    if (a > 2 * b)
    {
        printf("aはbの２倍よりも大きいです\n");
    }

    return 0;
}