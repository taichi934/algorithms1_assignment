#include <stdio.h>

int check_prime(int k)
{
    if (k < 2)
        return 0;
    else if (k == 2)
        return 1;
    else if (k % 2 == 0)
        return 0;

    for (int i = 3; i < k; i += 2)
    {
        if (k % i == 0)
            return 0;
    }

    return 1;
}

int main(void)
{
    int m;
    int cnt = 0;
    printf("type an integer:");
    scanf("%d", &m);

    for (int i = 0; i < 100000000; i++)
    {
        if (check_prime(i))
            cnt++;
        if (cnt == m)
        {
            printf("%d個目の素数は%d\n", m, i);
            return 0;
        }
    }

    printf("\n");
    return 0;
}