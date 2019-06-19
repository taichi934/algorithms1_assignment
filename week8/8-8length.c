#include <stdio.h>

int main(void)
{
    char str1[128];
    char str2[128];
    printf("str1 の文字列を入力してください: \n");
    scanf("%s", str1);
    printf("str2 の文字列を入力してください: \n");
    scanf("%s", str2);

    int len1 = 0;
    int len2 = 0;
    char *p = str1;
    while (*p++)
        len1++;

    p = str2;
    while (*p++)
        len2++;

    printf("%s", (len1 != len2) ? "２つの文字列の長さは異なります。" : "・・・長さは同じです\n");
    printf("%s\n", str1);
    printf("%s\n", str2);
    //scanf("%d", );
    return 0;
}