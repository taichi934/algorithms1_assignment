#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[128];
    char str2[128];
    char str3[128];
    printf("Input\nstr1:");
    scanf("%s", str1);
    printf("str2: ");
    scanf("%s", str2);
    printf("str3:");
    scanf("%s", str3);
    if (strcmp(str1, str2) > 0)
    {
        char *temp;
        strcpy(temp, str1);
        strcpy(str1, str2);
        strcpy(str2, temp);
    }
    if (strcmp(str2, str3) > 0)
    {
        char temp[128];
        strcpy(temp, str2);
        strcpy(str2, str3);
        strcpy(str3, temp);
    }
    if (strcmp(str1, str2) > 0)
    {
        char temp[128];
        strcpy(temp, str1);
        strcpy(str1, str2);
        strcpy(str2, temp);
    }
    printf("並べ替え完了\nstr1: %s\n", str1);
    printf("str2: %s\n", str2);
    printf("str3: %s\n", str3);

    return 0;
}