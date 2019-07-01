#include <stdio.h>

typedef struct {
  char name[128];
  int area;
  long population;
  long density;
} Prefecture;

void calc_density(Prefecture *x) { x->density = x->population / x->area; }

int main(void) {
  FILE *fp;
  char filename[] = {"prefectures.txt"};

  Prefecture prefarray[47];

  fp = fopen(filename, "r");
  for (int i = 0; i < 47; i++) {
    Prefecture x;
    fscanf(fp, "Name:%s Area:%d Population:%ld\n", x.name, &x.area,
           &x.population);  // don't wanna use "\n", but how?
    calc_density(&x);
    prefarray[i] = x;
  }
  fclose(fp);

  for (int i = 0; i < 47; i++) {
    printf("都道府県名：%s、面積： %d、人口： %ld、人口密度：%ld\n",
           prefarray[i].name, prefarray[i].area, prefarray[i].population,
           prefarray[i].density);
  }

  return 0;
}