#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[128];
    int area;
    long population;
    long density;
} Prefecture;

void calc_density(Prefecture *x)
{
    x->density = x->population / x->area;
}

void ssort_by_density(Prefecture a[], int num)
{
    for (int i = 0; i < num - 1; i++)
    {
        Prefecture *max = &a[num - 1];
        for (int j = num - 1; j > i; j--)
        {
            if (max->density < a[j].density)
            {
                max = &a[j];
            }
        }
        if (a[i].density < max->density)
        {
            Prefecture temp = a[i];
            a[i] = *max;
            *max = temp;
        }
    }
}

void ssort_by_area(Prefecture a[], int num)
{
    for (int i = 0; i < num - 1; i++)
    {
        Prefecture *max = &a[num - 1];
        for (int j = num - 1; j > i; j--)
        {
            if (max->area < a[j].area)
            {
                max = &a[j];
            }
        }
        if (a[i].area < max->area)
        {
            Prefecture temp = a[i];
            a[i] = *max;
            *max = temp;
        }
    }
}
void ssort_by_population(Prefecture a[], int num)
{
    for (int i = 0; i < num - 1; i++)
    {
        Prefecture *max = &a[num - 1];
        for (int j = num - 1; j > i; j--)
        {
            if (max->population < a[j].population)
            {
                max = &a[j];
            }
        }
        if (a[i].population < max->population)
        {
            Prefecture temp = a[i];
            a[i] = *max;
            *max = temp;
        }
    }
}

int main(int argc, char *argv[])
{
    FILE *fp;
    char filename[] = {"prefectures.txt"};

    Prefecture prefarray[47];

    fp = fopen(filename, "r");
    for (int i = 0; i < 47; i++)
    {
        Prefecture x;
        fscanf(fp, "Name:%s Area:%d Population:%ld\n", x.name, &x.area, &x.population); //don't wanna use "\n", but how?
        calc_density(&x);
        prefarray[i] = x;
    }
    fclose(fp);

    if (!strcmp(argv[1], "area"))
    {
        ssort_by_area(prefarray, 47);
    }
    else if (!strcmp(argv[1], "population"))
    {
        ssort_by_population(prefarray, 47);
    }
    else if (!strcmp(argv[1], "density"))
    {
        ssort_by_density(prefarray, 47);
    }

    for (int i = 0; i < 47; i++)
    {
        printf("都道府県名：%s、面積： %d、人口： %ld、人口密度：%ld\n", prefarray[i].name, prefarray[i].area, prefarray[i].population, prefarray[i].density);
    }

    return 0;
}
