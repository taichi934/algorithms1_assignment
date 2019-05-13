#include <stdio.h>

int main(void)
{

    int a, b;
    printf("Input a: ");
    scanf("%d", &a);

    printf("Input b: ");
    scanf("%d", &b);

    printf("%.1d\n", a * b);

    return 0;
}