#include <stdio.h>

int main(void)
{
    int k;
    scanf("%d", &k);

    for (int i = 1; i < k; i += 2)
    {
        printf("%d, ", i);
    }
    return 0;
}