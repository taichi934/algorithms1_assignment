#include <stdio.h>

void clear_buff(char buff[], int *index) {
  for (int i = 0; i < *index; i++) buff[i] = '\0';
  *index = 0;
}

void print_buff(char buff[], int *index) {
  for (int i = 0; i < *index + 1; i++) printf("%c", buff[i]);
  printf("\n");
}

int main(void) {
  char buff[20];
  FILE *fp;
  char filename[] = {"anne_short.txt"};
  int ch;
  int index = 0;
  int next_raw = 0;
  int continuous_ch = 0;

  fp = fopen(filename, "r");
  while ((ch = fgetc(fp)) != EOF) {
    if (ch == ' ') {
      if (next_raw == 1) {
        next_raw = 0;
        continue;
      } else {
        if (continuous_ch == 1) {
          continuous_ch = 0;
          continue;
        }
        next_raw = 1;
        print_buff(buff, &index);
        clear_buff(buff, &index);
        continue;
      }
    } else if (ch == '.' || ch == ',' || ch == '\n') {
      continuous_ch = 1;
      print_buff(buff, &index);
      clear_buff(buff, &index);
    } else {
      next_raw = 0;
      continuous_ch = 0;
      buff[index] = ch;
      index++;
    }
  }
  fclose(fp);

  return 0;
}