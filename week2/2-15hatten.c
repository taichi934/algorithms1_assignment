#include <stdio.h>

int main(void)
{

    int k;
    // while (1)
    // {
    //     printf("12以下の自然数を入力：");
    //     scanf("%d", &k);
    //     if (k < 13)
    //         break;
    // }

    do
    {
        printf("12以下の自然数を入力：");
        scanf("%d", &k);
    } while (k > 12);

    for (int i = 1; i <= k; i++)
    {
        switch (i)
        {
        case 1:
            printf("one ");
            break;
        case 2:
            printf("two ");
            break;
        case 3:
            printf("three ");
            break;
        case 4:
            printf("four ");
            break;
        case 5:
            printf("five ");
            break;
        case 6:
            printf("six ");
            break;
        case 7:
            printf("seven ");
            break;
        case 8:
            printf("eight ");
            break;
        case 9:
            printf("nine ");
            break;
        case 10:
            printf("ten ");
            break;
        case 11:
            printf("eleven ");
            break;
        default:
            printf("twelve ");
            break;
        }
    }
    printf("\n");

    return 0;
}