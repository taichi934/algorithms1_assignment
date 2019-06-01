#include <stdio.h>

int main(void)
{
    printf("文字を入力してください: ");
    int a = getchar();
    printf("%cのJISコードは", a);
    printf("10 進数では %d, 16 進数では 0x%X\n", a, a);
    return 0;
}