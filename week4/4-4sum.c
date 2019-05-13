#include <stdio.h>

int sum(int n)
{
    int i;
    int sum = 0;
    for (i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}

int main(void)
{
    int n;
    scanf("%d", &n);
    printf("1から%dまでの和は%d\n", n, sum(n));
    return 0;
}