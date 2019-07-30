#include <stdio.h>
#include <stdlib.h>

#define SIZE_X 20
#define SIZE_Y 10

void read_map(char map[][SIZE_X]);
void print_map(char map[][SIZE_X]);

int main(void) {
  char map[SIZE_Y][SIZE_X];
  read_map(map);
  print_map(map);
  return 0;
}

void read_map(char map[][SIZE_X]) {
  int ch, i = 0, j = 0;
  FILE *fp;
  fp = fopen("meiro1.txt", "r");
  if (fp == NULL) {
    printf("failed to open the file...\n");
    exit(1);
  }
  while ((ch = fgetc(fp)) != EOF) {
    if (ch == '\n') {
      j = 0;
      i++;
      continue;
    }
    map[i][j++] = ch;
  }
  fclose(fp);
}

void print_map(char map[][SIZE_X]) {
  for (int i = 0; i < SIZE_Y; i++) {
    for (int j = 0; j < SIZE_X; j++) {
      printf("%c", map[i][j]);
    }
    printf("\n");
  }
}