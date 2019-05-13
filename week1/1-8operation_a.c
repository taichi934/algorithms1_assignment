#include <stdio.h>

int main(void)
{
    int a, b;
    printf("Input a:\n");
    scanf("%d", &a);
    printf("Input b:\n");
    scanf("%d", &b);

    printf("a+bは%dです。\n", a + b);
    return 0;
}