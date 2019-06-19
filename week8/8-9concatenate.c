#include <stdio.h>

int main(void)
{
    char str1[128];
    char str2[128];
    printf("str1 の文字列を入力してください: \n");
    scanf("%s", str1);
    printf("str2 の文字列を入力してください: \n");
    scanf("%s", str2);

    char concat[256];
    char *p1 = str1;
    char *p2 = str2;

    int len1 = 0;
    while (*p1)
    {
        len1++;
        p1++;
    }

    int len2 = 0;
    while (*p2)
    {
        len2++;
        p2++;
    }

    for (int i = 0; i < len1 + len2; i++)
    {
        if (i < len1)
            concat[i] = str1[i];
        else
            concat[i] = str2[i - len1];
    }
    printf("%s\n", concat);

    //printf("%d\n");
    //scanf("%d", );
    return 0;
}