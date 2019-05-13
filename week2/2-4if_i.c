#include <stdio.h>

int main(void)
{
    int a, b, c;
    printf("Input a: \n");
    scanf("%d", &a);
    printf("Input b: \n");
    scanf("%d", &b);
    printf("Input c: \n");
    scanf("%d", &c);

    if (a > b && a > c)
    {
        if (b > c)
        {
            printf("3変数のうち最小は%dです", c);
        }
        else
        {
            printf("3変数のうち最小は%dです", b);
        }
    }
    if (a < b && a < c)
    {
        printf("3変数のうち最小は%dです", a);
    }

    return 0;
}