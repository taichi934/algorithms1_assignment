#include <stdio.h>

int main(void)
{
    int a, b;
    printf("Input a:\n");
    scanf("%d", &a);
    printf("Input b:\n");
    scanf("%d", &b);

    printf("a+bの符号を反転した値-(a+b)は%dです。\n", -(a + b));
    return 0;
}