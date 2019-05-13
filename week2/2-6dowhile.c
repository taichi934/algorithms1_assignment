#include <stdio.h>

int main(void)
{
    int a;
    do
    {
        do
        {
            scanf("%d", &a);
            if (a == 10)
            {
                break;
            }
            printf("入力された数字は%dです\n", a);
        } while (0 <= a && a <= 10);
        if (a == 10)
        {
            break;
        }
        printf("0~10の範囲で入力してください\n");
    } while (1);

    return 0;
}