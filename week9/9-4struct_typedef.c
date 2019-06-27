#include <stdio.h>
#include <string.h>
#define sqr(n) ((n) * (n))

typedef struct student
{
    char name[128];
    int height;
    float weight;
    long schols;
    float bmi;
} Student;

void calc_bmi(Student std[], int num)
{
    for (int i = 0; i < num; i++)
    {
        float hei = (float)(std[i].height) / 100;
        std[i].bmi = std[i].weight / sqr(hei);
    }
}

void swap_student(Student *x, Student *y)
{
    Student temp = *x;
    *x = *y;
    *y = temp;
}

void sort_by_bmi(Student std[], int num)
{
    for (int i = 0; i < num - 1; i++)
    {
        for (int j = num - 1; j > i; j--)
        {
            if (std[j - 1].bmi < std[j].bmi)
            {
                swap_student(&std[j - 1], &std[j]);
            }
        }
    }
}

void print_student(Student std[], int num)
{
    for (int i = 0; i < num; i++)
    {
        printf("Name: %s, Height: %d, Weight: %.1f, BMI: %.2f, Scholarship: %ld\n", std[i].name, std[i].height, std[i].weight, std[i].bmi, std[i].schols);
    }
}

int main(void)
{

    Student std[] = {{"Tanaka", 160, 55.8, 58000}, {"Suzuki", 185, 86.2, 63000}, {"Sato", 172, 77.5, 75000}};

    Student *p = &std[2];
    p->height = 180;

    calc_bmi(std, 3);

    sort_by_bmi(std, 3);

    print_student(std, 3);

    return 0;
}