#include <stdio.h>

void print_array(int a[], int num)
{
    for (int i = 0; i < num; i++)
        printf("%d ", a[i]);
    putchar('\n');
}

void bsort(int a[], int num)
{
    for (int i = 0; i < num-1; i++)
    {
        for (int j = num - 1; j > i; j--)
        {
            if (a[j - 1] > a[j])
            {
                int temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
                print_array(a, num);
            }
        }
    }
}

int main(void)
{
    int ary[10] = {72, 74, 50, 71, 77, 84, 61, 90, 73, 75};
    bsort(ary, 10);

    return 0;
}