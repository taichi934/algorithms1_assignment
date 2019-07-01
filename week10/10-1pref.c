#include <stdio.h>

int main(void)
{
    FILE *fp;
    char filename[] = {"prefectures.txt"};

    char name[128];
    int area;
    long population;
    long density;
    fp = fopen(filename, "r");
    for (int i = 0; i < 47; i++)
    {
        fscanf(fp, "Name:%s Area:%d Population:%ld\n", name, &area, &population); //don't wanna use "\n", but how?
        density = population / area;
        printf("都道府県名：%s、面積： %d、人口： %ld、人口密度：%ld\n", name, area, population, density);
    }
    fclose(fp);

    return 0;
}