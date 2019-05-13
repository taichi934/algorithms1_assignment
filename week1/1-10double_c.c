#include <stdio.h>

int main(void)
{

    double a, b;
    printf("Input a: ");
    scanf("%lf", &a);

    printf("Input b: ");
    scanf("%lf", &b);

    printf("aとbの平均は%fです\n", (a + b) / 2);

    return 0;
}