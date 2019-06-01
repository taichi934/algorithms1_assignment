#include <stdio.h>

void bsort(int a[], int num)
{
    for (int i = num - 1; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main(void)
{
    int ary[10] = {72, 74, 50, 71, 77, 84, 61, 90, 73, 75};
    bsort(ary, 10);

    for (int i = 0; i < 10; i++)
        printf("%d ", ary[i]);
    putchar('\n');
    return 0;
}