#include <stdio.h>

void shiftleft(char str[][9], int num)
{
    for (int i = 0; i < num; i++)
    {
        char temp = str[i][0];
        for (int j = 0; j < 9; j++)
        {
            if (str[i][j + 1])
            {
                str[i][j] = str[i][j + 1];
            }
            else
            {
                str[i][j] = temp;
                break;
            }
        }
    }
}

int main(void)
{
    char str[4][9] = {"Wakayama", "Univ.", "Systems", "Engineer"};
    for (int i = 0; i < 4; i++)
        printf("%s\n", str[i]);
    printf("配列の大きさは%luバイトです。\n", sizeof(str));
    printf("現在のstrの値：\n");

    shiftleft(str, 4);

    for (int i = 0; i < 4; i++)
        printf("%s\n", str[i]);
    return 0;
}
// Wakayama\0Univ.\0\0\0\0Systems\0\0Engineer\0