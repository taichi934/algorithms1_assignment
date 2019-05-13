#include <stdio.h>

int max(int x, int y, int z)
{
    if (x > y && x > z)
    {
        return x;
    }
    else if (y > z)
    {
        return y;
    }
    else
    {
        return z;
    }
}

int min(int x, int y, int z)
{
    if (x > z && y > z)
    {
        return z;
    }
    else if (y > x)
    {
        return x;
    }
    else
    {
        return y;
    }
}

int diff(int x, int y, int z)
{
    return max(x, y, z) - min(x, y, z);
}

int main(void)
{
    int x, y, z;

    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);

    printf("最大値はと最小値の差は%d\n", diff(x, y, z));

    return 0;
}