#include <stdio.h>

int main(void)
{

    int x, y;
    int lmc = 1;
    int count = 0;

    scanf("%d", &x);
    scanf("%d", &y);

    //while (!(lmc % x == 0) || !(lmc % y == 0))
    while (!(lmc % x == 0 && lmc % y == 0))
    {
        lmc++;
    }

    printf("%d\n", lmc);

    return 0;
}