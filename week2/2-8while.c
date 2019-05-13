#include <stdio.h>

int main(void)
{
    int a = 0;

    while (0 <= a && a <= 10)
    {
        printf("0~10の範囲で入力してください\n");
        scanf("%d", &a);

        while (a != 10)
        {
            printf("入力された数字は%dです\n", a);
            scanf("%d", &a);
            if (0 > a || a > 10)
                break;
        }
        if (0 > a || a > 10)
        {
            printf("0~10の範囲で入力してください\n");
            a = 0;
        }
        if (a == 10)
            break;
    }

    return 0;
}