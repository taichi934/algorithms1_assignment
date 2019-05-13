#include <stdio.h>

int main(void)
{
    for (int i = 9; i > 0; i--)
    {
        for (int j = 9; j > 0; j--)
        {
            int k = i*j;
            if (k<10){
                break;
            }
            printf("%02d ", k);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}