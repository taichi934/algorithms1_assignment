#include <stdio.h>

int main(void)
{
    int k;
    printf("右上が直角な二等辺三角形を作ります。辺の長さを入力してください。辺の長さ:");
    scanf("%d", &k);
    for (int i = 0; i <k; i++)
    {
        for (int j =0;j<k; j++){
            if (j<i){
                printf(" ");
            }else {
                printf("*");
            }
        }
        
        printf("\n");
    }

    return 0;
}