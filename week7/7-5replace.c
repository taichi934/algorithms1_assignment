#include <stdio.h>

int main(void)
{
    char str[] = "Wakayama Uiversty";
    int i;
    while (str[i])
    {
        if ('a' <= str[i] && 'z' >= str[i])
            str[i] += 'A' - 'a';
        i++;
    }
    printf("%s", str);
    return 0;
}