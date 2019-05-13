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

    if (a % 2 == 0 || b % 2 == 0 || c % 2 == 0)
    {
    }
    else
    {
        printf("3変数のうち偶数はありません");
    }

    return 0;
}