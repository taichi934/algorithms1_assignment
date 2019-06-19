#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[128];
    char str2[128];
    printf("str1 の文字列を入力してください: \n");
    scanf("%s", str1);
    printf("str2 の文字列を入力してください: \n");
    scanf("%s", str2);

    char concat[256];

    strcpy(concat, str1);
    strcat(concat, str2);
    printf("%s\n", concat);

    //printf("%d\n");
    //scanf("%d", );
    return 0;
}