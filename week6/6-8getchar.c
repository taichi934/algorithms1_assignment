#include <stdio.h>

int main(void)
{
    int even = 0;
    int odd = 0;
    int character;

    while ((character = getchar()) != EOF)
    {
        switch (character)
        {
        case '0':
            even++;
            break;
        case '1':
            odd++;
            break;
        case '2':
            even++;
            break;
        case '3':
            odd++;
            break;
        case '4':
            even++;
            break;
        case '5':
            odd++;
            break;
        case '6':
            even++;
            break;
        case '7':
            odd++;
            break;
        case '8':
            even++;
            break;
        case '9':
            odd++;
            break;
        default:
            break;
        }
    }

    if (even > odd)
    {
        puts("偶数の方が多い");
    }
    else if (odd > even)
    {
        puts("奇数の方が多い");
    }

    return 0;
}