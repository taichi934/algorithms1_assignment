#include <stdio.h>

int main(void)
{
    int a;
    int c = 0;
    do
    {
        printf("１０以上２０未満の整数を入力してください");
        scanf("%d", &a);
        while (a >= 10 && 20 > a)
        {
            for (; a >= 0; a -= 2)
            {
                printf("%d ", a);
            }
        }
        printf("\n");
        c++;
    } while (c != 10);

    return 0;
}