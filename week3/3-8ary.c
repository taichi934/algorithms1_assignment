#include <stdio.h>

int main(void)
{
    int ary[10];
    for (int i = 0; i < 10; i++)
    {
        ary[i] = i * i;
    }

    for (int i = 0; i < 5; i++)
    {
        int temp = ary[i];
        ary[i] = ary[9 - i];
        ary[9 - i] = temp;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d, ", ary[i]);
    }
    printf("\n");
    return 0;
}
