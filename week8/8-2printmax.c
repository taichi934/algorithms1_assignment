#include <stdio.h>

int *max_element(int array[], int n)
{
    int *max = array;
    for (int i = 0; i < n; i++)
    {
        if (array[i] > *max)
            max = array + i;
    }
    return max;
}

int main(void)
{
    int *p;
    int ary[10] = {72, 74, 50, 71, 77, 84, 61, 90, 73, 75};

    p = max_element(ary, 10);
    printf("%p\n", p);
    //printf("%d\n");
    //scanf("%d", );
    return 0;
}