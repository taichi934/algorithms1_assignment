#include <stdio.h>

void mat_add(const int a[4][3][2], const int b[4][3][2], int c[4][3][2])
{
    int i, j, k;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 2; k++)
            {
                c[i][j][k] = a[i][j][k] + b[i][j][k];
            }
        }
    }
}

void mat_print(const int mat[4][3][2])
{
    int i, j, k;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 2; k++)
            {
                printf("%4d", mat[i][j][k]);
            }
            putchar('\n');
        }
        putchar('\n');
    }
}

int main(void)
{
    int tensu1[4][3][2] = {
        {{54, 65},
         {76, 65},
         {43, 78}},
        {{54, 66},
         {43, 87},
         {65, 87}},
        {{54, 65},
         {76, 65},
         {43, 78}},
        {{54, 66},
         {43, 87},
         {65, 87}}};
    int tensu2[4][3][2] = {
        {{54, 65},
         {76, 65},
         {43, 78}},
        {{54, 66},
         {43, 87},
         {65, 87}},
        {{54, 65},
         {76, 65},
         {43, 78}},
        {{54, 66},
         {43, 87},
         {65, 87}}};
    int sum[4][3][2];

    mat_add(tensu1, tensu2, sum);
    mat_print(sum);

    printf("\n");
    return 0;
}