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

// void sort_by_bmi(Student std[], int num)
// {
//     for (int i = 0; i < num - 1; i++)
//     {
//         for (int j = num - 1; j > i; j--)
//         {
//             if (std[j - 1].bmi < std[j].bmi)
//             {
//                 swap_student(&std[j - 1], &std[j]);
//             }
//         }
//     }
// }
void sort_by_schols(Student std[], int num)
{
    for (int i = 0; i < num - 1; i++)
    {
        for (int j = num - 1; j > i; j--)
        {
            if (std[j - 1].schols < std[j].schols)
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

// Student assign2struct(Student std[], int n)  // it turned out not need this
// {
//     Student temp;
//     strcpy(temp.name, std[n].name);
//     temp.height = std[n].height;
//     temp.weight = std[n].weight;
//     temp.bmi = std[n].bmi;
//     temp.schols = std[n].schols;
//     return temp;
// }

int main(void)
{

    Student std[] = {{"Tanaka", 160, 55.8, 58000}, {"Suzuki", 185, 86.2, 63000}, {"Sato", 172, 77.5, 75000}};

    Student *p = &std[2];
    p->height = 180;

    calc_bmi(std, 3);

    // sort_by_bmi(std, 3);
    Student s1, s2, s3;

    s1 = std[0]; // position of char name[] doesnt change, only the pointer does, so you don't have to strycpy.
    s2 = std[1];
    s3 = std[2];
    // strcpy(s1.name, std[0].name); // don't have to do this way. too much
    // s1.height = std[0].height;
    // s1.weight = std[0].weight;
    // s1.bmi = std[0].bmi;
    // s1.bmi = std[0].schols;
    // strcpy(s2.name, std[1].name);
    // s2.height = std[1].height;
    // s2.weight = std[1].weight;
    // s2.bmi = std[1].bmi;
    // s2.bmi = std[1].schols;
    // strcpy(s3.name, std[2].name);
    // s3.height = std[2].height;
    // s3.weight = std[2].weight;
    // s3.bmi = std[2].bmi;
    // s3.bmi = std[2].schols;
    // s1 = assign2struct(std, 0);
    // s2 = assign2struct(std, 1);
    // s3 = assign2struct(std, 3);

    sort_by_schols(std, 3);
    print_student(std, 3);

    return 0;
}