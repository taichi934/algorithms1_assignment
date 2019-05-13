#include <stdio.h>

int main(void)
{
    int ary[10];
    for (int i=0; i<10;i++){
        ary[i]= i*i;
    }
    for (int i=0; i<10;i++){
        printf("%d, ", ary[i]);
    }
    printf("\n");
    return 0;
}