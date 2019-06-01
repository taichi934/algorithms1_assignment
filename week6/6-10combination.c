#include <stdio.h>

int combination(int n, int r)
{
    if (r == n)
        return 1;
    if (r == 1)
        return n;
    return combination(n - 1, r - 1) + combination(n - 1, r);
}

int main(void)
{
    int n, r;
    printf("正の整数 n を入力してください: ");
    scanf("%d", &n);
    printf("正の整数 r を入力してください: ");
    scanf("%d", &r);
    printf("nCrは%d\n", combination(n, r));
    return 0;
}