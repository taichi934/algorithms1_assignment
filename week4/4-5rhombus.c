#include <stdio.h>

void put_charts(char c, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", c);
    }
}

int main(void)
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        put_charts(' ', i);
        put_charts('*', n - i);
        printf("\n");
    }
    return 0;
}