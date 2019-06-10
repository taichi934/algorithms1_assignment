#include <stdio.h>

int main(void)
{
    char str[] = "";

    printf("現在のstrの値：\n");
    printf("文字列を入力してください");
    scanf("%s", str);
    printf("現在のstrの値：");
    printf("%s\n", str);
    return 0;
}