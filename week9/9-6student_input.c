#include <stdio.h>
#include <string.h>
#define sqr(n) ((n) * (n))
typedef struct
{
    char name[128];
    int height;
    float weight;
    float bmi;
} Student;

Student student_input(void)
{
    Student temp;
    char name[128];
    printf("name: ");
    scanf("%s", name);
    int hei;
    printf("height: ");
    scanf("%d", &hei);
    float wei;
    printf("weight: ");
    scanf("%f", &wei);

    strcpy(temp.name, name);
    temp.height = hei;
    temp.weight = wei;
    temp.bmi = wei / sqr(((float)hei / 100));

    return temp;
}

int main(void)
{
    Student s = student_input();
    printf("name: %s, height: %d, weight: %.1f, bmi: %.2f\n", s.name, s.height, s.weight, s.bmi);

    return 0;
}