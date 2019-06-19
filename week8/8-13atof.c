#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char str1[128];
    char str2[128];
    char dot[] = {"."};
    printf("整数部分： ");
    scanf("%s", str1);
    printf("小数部分： ");
    scanf("%s", str2);

    char *floatnum = strcat(strcat(str1, dot), str2);

    double d = atof(floatnum);
    printf("入力された実数は%.4f\n", d);

    return 0;
}