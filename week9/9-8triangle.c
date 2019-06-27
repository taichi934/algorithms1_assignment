#include <stdio.h>
#include <string.h>
#include <math.h>

typedef struct
{
    double x;
    double y;
} Point;

typedef struct
{
    Point p1;
    Point p2;
    Point p3;
} Triangle;

double calc_distance(Point p1, Point p2)
{
    return ceil(sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2)));
}

int is_equilateral_triangle(Triangle t)
{
    if (calc_distance(t.p1, t.p2) == calc_distance(t.p1, t.p3))
        return 1;
    else
        return 0;
}

int main(void)
{
    Triangle t;
    printf("Coodinate of p1\n");
    printf("x: ");
    scanf("%lf", &t.p1.x);
    printf("y: ");
    scanf("%lf", &t.p1.y);
    printf("Coodinate of p2\n");
    printf("x: ");
    scanf("%lf", &t.p2.x);
    printf("y: ");
    scanf("%lf", &t.p2.y);
    printf("Coodinate of p3\n");
    printf("x: ");
    scanf("%lf", &t.p3.x);
    printf("y: ");
    scanf("%lf", &t.p3.y);

    // printf("%lf, %lf\n", t.p1.x, t.p1.y);
    // printf("%lf, %lf\n", t.p2.x, t.p2.y);

    if (is_equilateral_triangle(t))
    {
        printf("この三角形は正三角形です。\n");
    }
    else
    {
        printf("この三角形は正三角形ではありません。\n");
    }

    return 0;
}