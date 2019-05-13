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

    if (a > b)
    {
        printf("aとbのうち大きい方は%d\n", a);
    }
    else if (a == b)
    {
        printf("aとbはおなじです");
    }

    return 0;
}