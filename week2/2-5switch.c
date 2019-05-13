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

    
    switch (a % 2)
    {
    case 0:
        printf("aは偶数です\n");
        break;
    default:
        printf("aは奇数です");
    }

    return 0;
}