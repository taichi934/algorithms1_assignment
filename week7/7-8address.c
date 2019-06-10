#include <stdio.h>

int main(void)
{
    char c[3][2];
    int i[3][2];
    double d[3][2];

    for (int n = 0; n < 3; n++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                switch (n)
                {
                case 0:
                    printf("c[%d][%d]のアドレスは%p\n", j, k, &c[j][k]);
                    break;
                case 1:
                    printf("i[%d][%d]のアドレスは%p\n", j, k, &i[j][k]);
                    break;
                default:
                    printf("d[%d][%d]のアドレスは%p\n", j, k, &d[j][k]);
                    break;
                }
            }
        }
    }

    return 0;
}