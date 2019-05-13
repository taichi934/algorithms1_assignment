#include <stdio.h>

int main(void)
{
    int k;
    int f = 1;
    scanf("%d", &k);
    for (int i = k; i > 0; i--)
    {
        f *= i;
    }
    printf("%d \n", f);
    return 0;
}