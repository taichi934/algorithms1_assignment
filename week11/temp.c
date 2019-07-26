#include <stdio.h>
#include <string.h>

int main(void) {
  char a[] = "abc";
  char b[] = "banana";
  int result = strcmp(a, b);
  printf("%d\n", result);
  return 0;
}