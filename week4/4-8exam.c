#include <stdio.h>

int input_score(void);

void input_multiple_scores(int num, int ary[]);

int main(void)
{
    int score[10];
    input_multiple_scores(10, score);

    //calc mean
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        sum += score[i];
    }
    printf("平均点は%d\n", sum / 10);

    //explore max
    int max = score[0];
    for (int i = 1; i < 10; i++)
    {
        if (max < score[i])
            max = score[i];
    }
    printf("最高点は%d\n", max);

    return 0;
}

int input_score(void)
{
    int x;
    do
    {
        printf("Input within 0~100: ");
        scanf("%d", &x);
    } while (x > 100);

    return x;
}

void input_multiple_scores(int num, int ary[])
{
    int i;
    for (i = 0; i < num; i++)
    {
        ary[i] = input_score();
    }
}