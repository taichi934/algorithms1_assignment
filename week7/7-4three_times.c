#include <stdio.h>

int main(void)
{

    char str[128];
    scanf("%s", str);
    int i;
    for (i = 0; i < 3; i++)
    {
        int j = 0;
        while (str[j])
            putchar(str[j++]);
    }

    return 0;
}