#include <stdio.h>
#include <stdlib.h>

#define SIZE_X 20
#define SIZE_Y 10

void read_map(char map[][SIZE_X]);
int recursive_search(char map[][SIZE_X], int x, int y);

int visited[SIZE_Y][SIZE_X] = {0};

int main(void) {
  char map[SIZE_Y][SIZE_X];
  read_map(map);
  printf("Distance: %d\n", recursive_search(map, 1, 1));
  return 0;
}

void read_map(char map[][SIZE_X]) {
  int ch, i = 0, j = 0;
  FILE *fp;
  fp = fopen("meiro2.txt", "r");
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
  if (map[y][x] == 'G' /* (x,y)がゴールなら */) {
    return 0;  //距離を返す
  }
  if (map[y][x] == '#' /*pが通路でなければ*/) return -1;
  if (visited[y][x] == 1 /*pが探索済なら*/) return -1;
  visited[y][x] = 1;

  int len = 0;

  len = recursive_search(map, x + 1, y);
  if (len != -1) {  // not quite sure why im doing this
    return len + 1;
  }
  len = recursive_search(map, x, y + 1);
  if (len != -1) {
    return len + 1;
  }
  len = recursive_search(map, x - 1, y);
  if (len != -1) {
    return len + 1;
  }
  len = recursive_search(map, x, y - 1);
  if (len != -1) {
    return len + 1;
  }
  return -1;
}