#include <stdio.h>

int main(void)
{
    int a;
    printf("type an integer\n");
    scanf("%d", &a);

    if (a != 0)
    {
        printf("0ではありません\n");
    }

    return 0;
}