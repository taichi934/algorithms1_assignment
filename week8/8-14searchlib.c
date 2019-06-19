#include <stdio.h>
#include <string.h>

// int str_compare(const char *x, const char *y)
// {
//     while (*x == *y)
//     {
//         if (*x == '\0')
//             return 1;
//         x++;
//         y++;
//     }
//     return 0;
// }

int main(void)
{
    char str[] = {"Wakayama University is a good university in Wakayama."};
    char query[128];
    scanf("%s", query);

    if (strstr(str, query))
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