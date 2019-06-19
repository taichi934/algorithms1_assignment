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

void swap(int *px, int *py)
{
    int temp = *px;
    *px = *py;
    *py = temp;
}

int main(void)
{

    int ary[10] = {72, 74, 50, 71, 77, 84, 61, 90, 73, 75};
    int *pAry = ary;
    int n = 10;
    for (int i = 0; i < 10; i++)
    {
        int *max = max_element(pAry + i, n--);
        swap(max, pAry + i);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", ary[i]);
    }
    //printf("%d\n");
    //scanf("%d", );
    return 0;
}