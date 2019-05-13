#include <stdio.h>
#include <math.h>
#define NUM_ELEMENTS 10

int calc_max(int a[])
{
    int maximum;
    for (int i = 0; i < NUM_ELEMENTS; i++)
    {
        if (i == 0)
        {
            maximum = a[i];
        }
        else if (maximum < a[i])
        {
            maximum = a[i];
        }
    }
    return maximum;
}

int calc_min(int a[])
{
    int minimum;
    for (int i = 0; i < NUM_ELEMENTS; i++)
    {
        if (i == 0)
        {
            minimum = a[i];
        }
        else if (minimum > a[i])
        {
            minimum = a[i];
        }
    }
    return minimum;
}

int calc_mean(int a[])
{
    int sum = 0;
    for (int i = 0; i < NUM_ELEMENTS; i++)
    {
        sum += a[i];
    }
    return sum / NUM_ELEMENTS;
}

int calc_variance(int a[])
{
    int mean = calc_mean(a);
    int sigma = 0;
    for (int i = 0; i < NUM_ELEMENTS; i++)
    {
        sigma += pow(a[i] - mean, 2);
    }
    return sigma / NUM_ELEMENTS;
}

int main(void)
{
    int ary[10] = {72, 74, 50, 71, 77, 84, 61, 90, 73, 75};

    int max = calc_max(ary);
    int min = calc_min(ary);
    int mean = calc_mean(ary);
    int variance = calc_variance(ary);

    printf("%d\n", max);
    printf("%d\n", min);
    printf("%d\n", mean);
    printf("%d\n", variance);
    return 0;
}
