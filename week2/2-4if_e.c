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

    if (a % 10 < 3)
    {
        printf("aの１のくらいは3以下です\n");
    }

    return 0;
}