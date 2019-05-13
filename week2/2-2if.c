#include <stdio.h>

int main(void)
{
    int a;
    printf("type an integer\n");
    scanf("%d", &a);

    if (a % 3 == 0)
    {
        printf("3の倍数です\n");
    }
    else
    {
        printf("３の倍数ではありません\n");
    }
    return 0;
}