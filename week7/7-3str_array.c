#include <stdio.h>

int main(void)
{
    char str2[4][9] = {"Wakayama", "Univ.", "Systems", "Engineer"};
    for (int i = 0; i < 4; i++)
        printf("%s\n", str2[i]);
    printf("配列の大きさは%luバイトです。\n", sizeof(str2));
    printf("置き換える文字列を入力しなさい。");
    scanf("%s", str2[1]);
    for (int i = 0; i < 4; i++)
        printf("%s\n", str2[i]);
    printf("\n");
    return 0;
}

//before
//   0 1 2 3 4 5 6 7  8
// 0 W a k a y a m a \0
// 1 U n i v .\0\0\0 \0
// 2 S y s t e m s\0 \0
// 3 E n g i n e e r \0

//after
//   0 1 2 3 4 5 6 7  8
// 0 W a k a y a m a \0
// 1 P r e f e c t u  r
// 2 e\0 s t e m s\0 \0
// 3 E n g i n e e r \0

//before
// Wakayama\0Univ.\0\0\0\0Systems\0\0Engineer\0
//after
// Wakayama\0Prefecture\0stems\0\0Engineer\0