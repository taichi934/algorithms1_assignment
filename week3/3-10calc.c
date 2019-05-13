#include <stdio.h>
#define MAX_STUDENT 20

int main(void)
{
    int num;
    int score[MAX_STUDENT];
    int numOfScore[5] = {0};

    do
    {
        printf("Number of students: ");
        scanf("%d", &num);
        if (num < 1 || num > MAX_STUDENT)
        {
            printf("within 1~%d", MAX_STUDENT);
        }
    } while (num < 1 || num > MAX_STUDENT);

    for (int i = 0; i < num; i++)
    {
        do
        {
            printf("%d人目の点数：", i + 1);
            scanf("%d", &score[i]);
        } while (score[i] < 1 || score[i] > 100);

        if (score[i] < 60)
        {
            numOfScore[0]++;
        }
        else if (score[i] >= 60 && score[i] < 70)
        {
            numOfScore[1]++;
        }
        else if (score[i] >= 70 && score[i] < 80)
        {
            numOfScore[2]++;
        }
        else if (score[i] >= 80 && score[i] < 90)
        {
            numOfScore[3]++;
        }
        else
        {
            numOfScore[4]++;
        }
    }

    printf("\n");

    printf("60点未満の学生は%d人です\n", numOfScore[0]);
    for (int i = 60; i <= 90; i += 10)
    {
        if (i != 90)
        {
            printf("%d 点以上%d点未満の学生は%d人です\n", i, i + 10, numOfScore[i / 10 - 5]);
        }
        else
        {
            printf("%d 点以上の学生は%d人です\n", i, numOfScore[4]);
        }
    }
    printf("\n");

    return 0;
}