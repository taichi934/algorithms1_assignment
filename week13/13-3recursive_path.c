#include <stdio.h>
#include <stdlib.h>

#define SIZE_X 20
#define SIZE_Y 10

void read_map(char map[][SIZE_X]);
int recursive_search(char map[][SIZE_X], int x, int y);
void print_map(char map[][SIZE_X]);

int visited[SIZE_Y][SIZE_X] = {0};
int fx, fy;  // the coordinate of the goal

int main(void) {
  char map[SIZE_Y][SIZE_X];
  read_map(map);
  printf("Distance: %d\n", recursive_search(map, 1, 1));
  map[fy][fx] = 'G';  // add 'G' at the goal cuz it has disappeared
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

int recursive_search(char map[][SIZE_X], int x, int y) {
  /* (x,y)がゴールなら */
  if (map[y][x] == 'G') {
    fx = x;
    fy = y;
    return 0;  //距離を返す
  }
  /*pが通路でなければ*/
  if (map[y][x] == '#') return -1;
  /*pが探索済なら*/
  if (visited[y][x] == 1) return -1;
  visited[y][x] = 1;

  int len = 0;

  len = recursive_search(map, x + 1, y);
  if (len != -1) {
    map[y][x + 1] = '.';
    return len + 1;
  }
  len = recursive_search(map, x, y + 1);
  if (len != -1) {
    map[y + 1][x] = '.';
    return len + 1;
  }
  len = recursive_search(map, x - 1, y);
  if (len != -1) {
    map[y][x - 1] = '.';
    return len + 1;
  }
  len = recursive_search(map, x, y - 1);
  if (len != -1) {
    map[y - 1][x] = '.';
    return len + 1;
  }
  return -1;
}

void print_map(char map[][SIZE_X]) {
  for (int i = 0; i < SIZE_Y; i++) {
    for (int j = 0; j < SIZE_X; j++) {
      printf("%c", map[i][j]);
    }
    printf("\n");
  }
}