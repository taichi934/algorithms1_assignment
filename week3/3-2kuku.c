#include <stdio.h>

int main(void)
{
    for (int i = 9; i > 0; i--)
    {
        for (int j = 9; j > 0; j--)
        {
            printf("%02d ", i * j);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}