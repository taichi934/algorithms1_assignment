#include <stdio.h>

int str_compare(const char *x, const char *y)
{
    while (*x == *y)
    {
        if (*x == '\0')
            return 1;
        x++;
        y++;
    }
    return 0;
}

int main(void)
{
    char str1[128];
    char str2[128];
    char str3[128];

    scanf("%s", str1);
    scanf("%s", str2);
    scanf("%s", str3);

    if (str_compare(str1, str2))
    {
        if (str_compare(str2, str3))
        {
            printf("3 つの文字列は全て同じです\n");
            return 0;
        }
        else
        {
            printf("2 つの文字列は全て同じです\n");
            return 0;
        }
    }
    else if (str_compare(str2, str3))
    {
        if (str_compare(str2, str1))
        {
            printf("3 つの文字列は全て同じです\n");
            return 0;
        }
        else
        {
            printf("2 つの文字列は全て同じです\n");
            return 0;
        }
    }
    else if (str_compare(str1, str3))
    {
        if (str_compare(str2, str3))
        {
            printf("3 つの文字列は全て同じです\n");
            return 0;
        }
        else
        {
            printf("2 つの文字列は全て同じです\n");
            return 0;
        }
    }
    else
    {
        printf("全て異なる文字列です\n");
    }

    //printf("%d\n");
    //scanf("%d", );
    return 0;
}