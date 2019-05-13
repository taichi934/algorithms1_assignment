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

int median(int x, int y, int z)
{
    if (x > y && y > z)
    {
        return y;
    }
    else
    {
        if (y > x)
        {
            if (x > z)
            {
                return x;
            }
            else
            {
                return z;
            }
        }
        else
        {
            if (x > z)
            {
                return z;
            }
            else
            {
                return x;
            }
        }
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

int main(void)
{
    int x, y, z;

    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);

    printf("最大値は%d\n", max(x, y, z));
    printf("中央値は%d\n", median(x, y, z));
    printf("最小値は%d\n", min(x, y, z));

    return 0;
}