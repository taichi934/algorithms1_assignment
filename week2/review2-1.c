#include <stdio.h>

int main(void)
{
    int a;
    printf("Input a:\n");
    scanf("%d", &a);

    double d = (double)(a / 3.0);
    printf("%.5f", d);

    return 0;
}