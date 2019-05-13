#include <stdio.h>

int main(void)
{
    int a;
    int cO=0;
    int sum = 0;
    printf("0~10の範囲で入力してください\n");
    do
    {
        do
        {
            scanf("%d", &a);
            if (a == 0)
                cO++;
            else
                sum += a;
            printf("入力された数字は%dです\n", a);
        } while (0 <= a && a <10);

        printf("0~10の範囲で入力してください\n");

    } while (a != 10);

    printf("0は%d回入力されました\n", cO);
    printf("入力された値の合計は%dです\n", sum);

    return 0;
}