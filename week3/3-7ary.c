#include <stdio.h>

int main(void)
{
    int ary[10];
    int ary2[10];
    int sum=0;
    for (int i=0; i<10;i++){
        ary[i]= i*i;
        sum+=ary[i];
        ary2[i]= sum;
    }
   
    for (int i=0; i<10;i++){
        printf("%d, ", ary2[i]);
    }
    printf("\n");
    return 0;
}