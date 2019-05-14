#include <stdio.h>

int main(void)
{
    float f;
    double d;
    long double ld;

    scanf("%Lf", &ld);
    f = (float)ld;
    printf("float型のサイズは%luバイトで、値は%f\n", sizeof(f), f);

    d = (double)ld;
    printf("double型のサイズは%luバイトで、値は%lf\n", sizeof(d), d);

    printf("long double型のサイズは%luバイトで、値は%Lf\n", sizeof(ld), ld);

    return 0;
}

//is this result corrcct?