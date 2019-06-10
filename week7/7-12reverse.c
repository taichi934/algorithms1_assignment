#include <stdio.h>

void reverse(char str[][9], int n)
{

    for (int i = 0; i < n; i++)
    {
        char *first = &str[i][0];
        char *last = &str[i][0];

        if (*first == '\0')
            return;

        while (*(last + 1) != '\0')
            last++;

        while (first < last)
        {
            char temp = *first;
            *first = *last;
            *last = temp;

            first++;
            last--;
        }
    }

    return;
}

int main(void)
{
    char str[4][9] = {"Wakayama", "Univ.", "Systems", "Engineer"};
    for (int i = 0; i < 4; i++)
        printf("%s\n", str[i]);
    printf("配列の大きさは%luバイトです。\n", sizeof(str));

    reverse(str, 4);

    for (int i = 0; i < 4; i++)
        printf("%s\n", str[i]);

    return 0;
}

//before
//   0 1 2 3 4 5 6 7  8
// 0 W a k a y a m a \0
// 1 U n i v .\0\0\0 \0
// 2 S y s t e m s\0 \0
// 3 E n g i n e e r \0

//before
// Wakayama\0Univ.\0\0\0\0Systems\0\0Engineer\0
