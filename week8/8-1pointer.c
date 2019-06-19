#include <stdio.h>
int main(void)
{
    int a[3];
    int *p;
    int tmp; //交換用の一時的変数
    printf("a[0] の値を入力してください:");
    scanf("%d", &a[0]);
    printf("a[1] の値を入力してください:");
    scanf("%d", &a[1]);
    printf("a[2] の値を入力してください:");
    scanf("%d", &a[2]);
    p = a;

    if (p[0] > p[1])
    {
        int temp = p[0];
        p[0] = p[1];
        p[1] = temp;
    }
    if (p[1] > p[2])
    {
        int temp = p[1];
        p[1] = p[2];
        p[2] = temp;
    }
    if (p[0] > p[1])
    {
        int temp = p[0];
        p[0] = p[1];
        p[1] = temp;
    }

    printf("a[]: %d, %d, %d¥n", a[0], a[1], a[2]);
    return 0;
}