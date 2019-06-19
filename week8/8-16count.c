#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[] = {"Wakayama University is a good university in Wakayama."};
    char query[128];
    scanf("%s", query);
    int len1 = strlen(str);
    int len2 = strlen(query);
    int i = 0, j = 0;
    int count = 0;

    for (int i = 0; i < len1; i++)
    {

        while (str[i] == query[j])
        {
            if (j == len2 - 1)
            {
                count++;
                break;
            }
            i++;
            j++;
        }
        j = 0;
    }

    if (count)
        printf("queryはstrに%d回含まれます\n", count);
    else
        printf("含まれていません\n");
    return 0;
}