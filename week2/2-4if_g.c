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

    (a >= b) ? printf("aとbのうち大きのは%dです", a) : printf("aとbのうち大きのは%dです", b);
    return 0;
}