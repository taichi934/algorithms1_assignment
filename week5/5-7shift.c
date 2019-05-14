#include <stdio.h>

int main(void)
{
    unsigned int x, y;
    int count = 0;
    printf("xの値を出力してください：");
    scanf("%u", &x);

    while (!(x & 1U))
    {
        x >>= 1;
        count++;
    }
    y = x;

    //printf("%u", x);
    printf("xは%u×２＾%d\n", y, count);

    return 0;
}

//not sure the result is what is supposed to be