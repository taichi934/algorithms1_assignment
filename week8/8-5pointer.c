#include <stdio.h>

void ary_set(int *v, int n, int val)
{
    for (int i = 0; i < n; i++)
    {
        *(v + i) = val;
    }
}

int main(void)
{
    int i;
    int a[] = {1, 2, 3, 4, 5};

    ary_set(a, 5, 99);

    for (i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    //printf("%d\n");
    //scanf("%d", );
    return 0;
}