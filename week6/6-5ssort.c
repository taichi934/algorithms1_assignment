
#include <stdio.h>

void print_array(int a[], int num)
{
    for (int i = 0; i < num; i++)
        printf("%d ", a[i]);
    putchar('\n');
}

void ssort(int a[], int num)
{
    for (int i = 0; i < num - 1; i++)
    {
        int *min = &a[num - 1];
        for (int j = num - 1; j > i; j--)
        {
            if (*min > a[j])
            {
                min = &a[j];
            }
        }
        if (a[i] > *min)
        {
            int temp = a[i];
            a[i] = *min;
            *min = temp;
        }
        print_array(a, num);
    }
}

int main(void)
{
    int ary[10] = {72, 74, 50, 71, 77, 84, 61, 90, 73, 75};
    ssort(ary, 10);

    return 0;
}