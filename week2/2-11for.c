#include <stdio.h>

int main(void)
{
    int a;
    int c = 0;
    do
    {
        printf("１０以上２０未満の整数を入力してください\n");
        scanf("%d", &a);
        while (a >= 10 && 20 > a)
        {
            for (a *= 2; a >= 0; a--)
            {
                printf("+");
            }
        }
        printf("\n");
        c++;
    } while (c != 10);

    return 0;
}