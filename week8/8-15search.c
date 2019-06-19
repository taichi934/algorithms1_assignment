#include <stdio.h>

int strstr_original(char *x, char *y)
{
    char *tempx = x; //最後にポインタをリセットする用
    char *tempy = y;
    while (*x)
    {
        if (*x != *y)
        {
            x++;
            y = tempy; //途中で一緒じゃなかったらリセット
        }
        else
        {
            y++;
            x++;
            if (*y == '\0')
                return 1;
        }
    }
    x = tempx;
    y = tempy;
    return 0;
}

int main(void)
{
    char str[] = {"Wakayama University is a good university in Wakayama."};
    char query[128];
    scanf("%s", query);

    if (strstr_original(str, query))
    {
        printf("query は str に含まれます\n");
    }
    else
    {
        printf("query は str に含まれません\n");
    }

    //printf("%d\n");
    //scanf("%d", );
    return 0;
}