#include <string.h>
#include <stdio.h>

void clear(char str[])
{
    while (*str)
    {
        *str = '\0';
        str++;
    }
}

int main(void)
{
    char ary[] = {"abcdefg"};
    char *str1 = ary;
    char str2[20];
    strcpy(str2, ary);

    printf("ary %s\n", ary);
    printf("str1 %s\n", str1);
    printf("str2 %s\n", str2);

    clear(str1);

    printf("ary %s\n", ary);
    printf("str1 %s\n", str1);
    printf("str2 %s\n", str2);
    return 0;
}