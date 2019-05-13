#include <stdio.h>

int main(void)
{

    int a, b;
    printf("Input a: ");
    scanf("%d", &a);

    printf("Input b: ");
    scanf("%d", &b);

    double x = (a * 3 + b * 4) / 3;
    printf("%.5lf\n", x);

    return 0;
}