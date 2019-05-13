#include <stdio.h>

int main(void)
{

    double a, b;
    printf("Input a: ");
    scanf("%lf", &a);

    printf("Input b: ");
    scanf("%lf", &b);

    printf("a+bは%lfです\n", a + b);

    return 0;
}