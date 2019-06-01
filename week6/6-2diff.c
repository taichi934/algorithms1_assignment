#include <stdio.h>

#define diff(x, y) (x - y)

int main(void)
{
    unsigned a, b;
    scanf("%u", &a);
    scanf("%u", &b);

    if (b > a)
    {
        int temp = b;
        b = a;
        a = temp;
    }
    printf("aとbの差は%u\n", diff(a, b));

    return 0;
}