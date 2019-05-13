#include <stdio.h>

int main(void)
{
    int a, b;
    printf("Input a:\n");
    scanf("%d", &a);
    printf("Input b:\n");
    scanf("%d", &b);

    printf("aをbで割った商は%dで、余りは%dです。\n", a / b, a % b);
    return 0;
}