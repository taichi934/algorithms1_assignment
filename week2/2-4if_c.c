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

    if (a % 2 == 0)
    {
        printf("aは偶数です\n");
    }
    else if (a % 2 != 0)
    {
        printf("aは奇数です");
    }

    return 0;
}