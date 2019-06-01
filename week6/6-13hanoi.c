#include <stdio.h>
#define FORMAT1 "円盤[%d] を棒 %c から棒 %c へ移動する\n"

void hanoi(int n, char from, char via, char to)
{
    if (n == 1)
    {
        printf(FORMAT1, n, from, to);
    }
    else
    {
        hanoi(n - 1, from, to, via);
        printf(FORMAT1, n, from, to);
        hanoi(n - 1, via, from, to);
    }
}

int main(void)
{
    int num_disk = 4;
    hanoi(num_disk, 'A', 'B', 'C');
    return 0;
}