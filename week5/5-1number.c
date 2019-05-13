#include <stdio.h>
int count = 0;

int judge(int k)
{
    if (k % 2 == 0)
        return 0;
    if (k % 3 == 0)
        return 0;
    if (k % 10 == 0)
        return 0;
    return 1;
}

int next_num(int k)
{
    while (1)
    {
        if (judge(++k))
        {
            count++;
            return k;
        }
    }

    return 0;
}

int main(void)
{
    int a;
    scanf("%d", &a);
    do
    {
        a = next_num(a);
    } while (a <= 10000);

    printf("初めて100000を超えるのは%d番目であり、その数は%d", count, a);

    return 0;
}