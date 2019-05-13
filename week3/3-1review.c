#include <stdio.h>

int main(void)
{
  int k;
  scanf("%d", &k);

  for (int i = 0; i < k; i++)
  {
    if (i % 2 == 0 && i % 10 != 0)
    {
      printf("%d ", i);
    }
  }
  printf("\n");
}
