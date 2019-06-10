#include <stdio.h>

int main(void)
{
    int i = 8;
    double d = 1.0;
    printf("変数iの値は%d\n", i);
    printf("変数dの値は%.1f\n", d);

    int *pi = &i;
    double *pd = &d;
    *pi /= 2;
    *pd /= 2;
    printf("変数iとdの値を2で割りました。\n");
    printf("変数iの値は%d\n", i);
    printf("変数dの値は%.1f\n", d);

    *pd /= *pi;
    printf("変数 d の値を i で割りました。\n");
    printf("変数dの値は%.3f\n", d);

    return 0;
}