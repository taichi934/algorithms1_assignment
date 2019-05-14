#include <stdio.h>
#include <math.h>

int main(void)
{
    int i;
    int sum1 = 0;
    int sum2 = 0;
    int mean1;
    double mean2;
    double std_divi;

    int ary[10] = {72, 74, 50, 71, 77, 84, 61, 90, 73, 75};

    for (i = 0; i < 10; i++)
    {
        sum1 += ary[i];
    }
    mean1 = sum1 / 10;

    for (i = 0; i < 10; i++)
    {
        sum2 += pow(mean1 - ary[i], 2);
    }
    mean2 = sum2 / 10;
    std_divi = sqrt(mean2);

    printf("平均は%d、標準偏差は%lf\n", mean1, std_divi);

    return 0;
}