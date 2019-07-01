#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// void clear_buff(char buff[])
// {
//     int i = 0;
//     while (buff[i])
//     {
//         buff[i++] = '\0';
//     }
// }

// int read_word(FILE *fp, char buf[])
// {
//     clear_buff(buf);
//     int ch;
//     int word_exists = 0;
//     int index;
//     while ((ch = fgetc(fp)) != EOF)
//     {
//         switch (ch)
//         {
//         case ' ':
//         case '.':
//         case ',':
//         case '\n':
//             if (word_exists)
//                 return strlen(buf);
//             else
//                 continue;
//         default:
//             index = strlen(buf);
//             buf[index++] = ch;
//             buf[index] = '\0';
//             word_exists = 1;
//         }
//     }
//     return -1;
// }

// int read_word(FILE *fp, char buff[])
// {
//      clear_buff(buff);
//     char tempstr[20];
//     int ch;
//     int index = 0;

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
  char buf[20];
  FILE *fp;
  fp = fopen("anne_short.txt", "r");
  if (fp == NULL) {
    printf("File read error !\n");
    exit(1);  //異常終了
  }
  while (read_word(fp, buf) > 0) {
    printf("%s\n", buf);
  }
  fclose(fp);
  return 0;
}
