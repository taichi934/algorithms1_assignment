#include <stdio.h>

int input_score(void)
{
    int x;
    do
    {
        printf("Input within 0~100: ");
        scanf("%d", &x);
    } while (x > 100 || x < 0);

    return x;
}

int main(void)
{
    int max = 0;
    int input;
    do
    {
        input = input_score();
        if (input == 0)
        {
            break;
        }
        max = max < input ? input : max;
    } while (input);

    max == 0 ? printf("値が入力されていません\n") : printf("入力された最大値は%d\n", max);

    return 0;
}