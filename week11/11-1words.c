#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int read_word(FILE *fp, char buf[]) {
  int ch;
  int index = 0;
  while ((ch = fgetc(fp)) != EOF) {
    switch (ch) {
      case ' ':
      case '.':
      case ',':
      case '\n':
        if (index > 0) {
          buf[index] = '\0';
          return index;
        } else
          continue;
      default:
        buf[index++] = ch;
        // word_exists = 1;
    }
  }
  return index;
}

int main(void) {
  char buf[500][20];
  char *words[400];
  int len;
  FILE *fp;
  fp = fopen("anne_short.txt", "r");
  if (fp == NULL) {
    printf("File read error !\n");
    exit(1);  //異常終了
  }
  int index = 0;
  while ((len = read_word(fp, buf[index])) > 0) {
    words[index] = (char *)malloc(sizeof(char) * len);
    if (words[index] == NULL) {
      printf("malloc failed.\n");
      exit(1);
    }
    strcpy(words[index], buf[index]);
    printf("%s ", words[index]);
    free(words[index]);
    index++;
  }
  // printf("%d", index);

  return 0;
}
