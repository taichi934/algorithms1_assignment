#include <stdio.h>

int main(void)
{
    int a;
    printf("You Are:\n");
    scanf("%d", &a);
    printf("あなたは%dか月以上生きています。\n", a * 12);
    return 0;
}