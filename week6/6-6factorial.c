#include <stdio.h>

int factorial(int n)
{
    int result = 1;
    if (n == 0)
        return 1;
    for (int i = n; i > 0; i--)
        result *= i;

    return result;
}

int main(void)
{
    int num;
    printf("Type an integer: ");
    scanf("%d", &num);
    printf("%dの階乗は%d\n", num, factorial(num));
    return 0;
}