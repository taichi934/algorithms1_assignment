#include <stdio.h>

int main(void)
{
    int k;
    printf("Type integer:");
    scanf("%d", &k);
    if (k < 2)
    {
        printf("%dは素数ではありません\n", k);
        return 0;
    }
    else if (k == 2)
    {
        printf("2は素数です\n");
        return 0;
    }
    else if (k % 2 == 0)
    {
        printf("%dは素数ではありません\n", k);
        return 0;
    }

    for (int i = 3; i < k; i += 2)
    {
        if (k % i == 0)
        {
            printf("%dは素数ではありません\n", k);
            return 0;
        }
    }

    printf("%dは素数です\n", k);

    return 0;
}