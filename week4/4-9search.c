#include <stdio.h>

int input_score(void);

void input_multiple_scores(int num, int ary[]);

void search(int ary[], int num);

int main(void)
{
    int score[10];
    int num = 10;
    input_multiple_scores(num, score);

    search(score, num);
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

void search(int ary[], int num)
{
    int count = 0;
    for (int i = 0; i < num; i++)
    {
        if (ary[i] < 60)
            count++;
    }
    printf("６０未満の人は%d人\n", count);
}