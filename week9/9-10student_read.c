
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

int main(void)
{

    Student s1, s2, s3;
    char name[128];
    int height;
    float weight;
    float bmi;
    long schols;
    FILE *fp;
    char fileName[] = "student.txt";
    if ((fp = fopen(fileName, "r")) == NULL)
    {
        printf("Cannot Read.");
    }
    else
    {
        int i = 1;
        while (fscanf(fp, "%s%d%f%f%ld", name, &height, &weight, &bmi, &schols) == 5)
        {
            switch (i)
            {
            case 1:
                strcpy(s1.name, name);
                s1.height = height;
                s1.weight = weight;
                s1.bmi = bmi;
                s1.schols = schols;
                break;
            case 2:
                strcpy(s2.name, name);
                s2.height = height;
                s2.weight = weight;
                s2.bmi = bmi;
                s2.schols = schols;
                break;
            case 3:
                strcpy(s3.name, name);
                s3.height = height;
                s3.weight = weight;
                s3.bmi = bmi;
                s3.schols = schols;
                break;
            }
            i++;
        }
        fclose(fp);
    }
    Student ary[] = {s1, s2, s3};

    Student *p = &ary[2];
    p->height = 180;

    calc_bmi(ary, 3);

    // sort_by_bmi(std, 3);

    // Student s1, s2, s3;
    // strcpy(s1.name, std[0].name);
    // s1.height = std[0].height;
    // s1.weight = std[0].weight;
    // s1.bmi = std[0].bmi;
    // s1.schols = std[0].schols;
    // strcpy(s2.name, std[1].name);
    // s2.height = std[1].height;
    // s2.weight = std[1].weight;
    // s2.bmi = std[1].bmi;
    // s2.schols = std[1].schols;
    // strcpy(s3.name, std[2].name);
    // s3.height = std[2].height;
    // s3.weight = std[2].weight;
    // s3.bmi = std[2].bmi;
    // s3.schols = std[2].schols;

    sort_by_schols(ary, 3);
    print_student(ary, 3);

    return 0;
}