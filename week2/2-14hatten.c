#include <stdio.h>

int main(void)
{
    int k;
    printf("数字を入力：");
        scanf("%d", &k);
    int cont = 0;
    for (int i = 1; i < k; i++)
    {
        if (k % i == 0)
        {
            printf("%d ", i);
            cont++;
        }
    }
    printf("\n約数の個数%d：\n", cont);
    return 0;
}