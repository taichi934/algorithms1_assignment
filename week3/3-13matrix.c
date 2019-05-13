#include <stdio.h>

int main(void)
{
    int ary1[2][3];
    int ary2[3][2];

    for (int i = 0; i < 2; i++)
    {
        printf("行列A(2行3列)の%d行目を入力してください:\n", i + 1);
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &ary1[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        printf("行列B(3行2列)の%d行目を入力してください:\n", i + 1);
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &ary2[i][j]);
        }
    }

    for (int i = 0; i < 2; i++)
    {
        int sum1 = 0; //積ででてきた行列の一列目
        int sum2 = 0; //積ででてきた行列の二列目
        for (int j = 0; j < 3; j++)
        {
            if (i == 0)
            {
                sum1 += ary1[i][j] * ary2[j][i];
            }
            else
            {
                sum1 += ary1[i][j] * ary2[j][i - 1];
            }
        }
        printf("%d ", sum1);
        for (int j = 0; j < 3; j++)
        {
            if (i == 0)
                sum2 += ary1[i][j] * ary2[j][i + 1];
            else
                sum2 += ary1[i][j] * ary2[j][i];
        }
        printf("%d\n", sum2);
    }

    printf("\n");
    return 0;
}