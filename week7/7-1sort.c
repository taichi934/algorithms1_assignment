#include <stdio.h>

void selection_sort(int array[], int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = i + 1; j < num; j++)
        {
            if (array[j] < array[i])
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

int main(void)
{
    int ary[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        int ch = getchar();
        if (ch >= '0' && ch <= '9')
            ary[i] = ch - '0';
        else
            i--;
    }

    selection_sort(ary, 5);

    for (i = 0; i < 5; i++)
    {
        printf("%d", ary[i]);
    }

        return 0;
}