#include <stdio.h>

int main(void)
{
    char a[][5] = {"LISP", "C", "Ada"};
    char *p[] = {"PAUL", "X", "MAC"};

    printf("2 次元配列 a を用いる方法では、3 単語を記憶するために %lu バイトを占有している。\n", sizeof(a) / sizeof(a[0][0]));
    printf("ポインタの配列 p を用いる方法では、3 単語を記憶するために %lu バイトを占有している。\n", sizeof(p));

    //printf("%d\n");
    //scanf("%d", );
    return 0;
}