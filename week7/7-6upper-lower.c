#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char str[128];
    scanf("%s", str);
    int i = 0;
    while (str[i])
    {
        if (isupper(str[i]))
            str[i] = tolower(str[i]);
        else if (islower(str[i]))
            str[i] = toupper(str[i]);
        i++;
    }
    printf("%s", str);
    return 0;
}