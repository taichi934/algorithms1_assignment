#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct word {
  char name[20];
  struct word *next;
};
typedef struct word Word;

void print_nodes(Word *p) {
  while (p != NULL) {
    printf("%s ", p->name);
    p = p->next;
  }
  printf("\n");
}

Word *add_node(char buf[], Word *root) {
  Word *w = (Word *)malloc(sizeof(Word));
  if (w == NULL) {
    printf("failed to allocate the memory");
    exit(1);
  }
  w->next = NULL;
  strcpy(w->name, buf);
  if (root == NULL) {
    root = w;
  } else {
    Word *ptr;
    ptr = root;
    while (ptr->next != NULL) {
      ptr = ptr->next;
    }
    ptr->next = w;
  }
  return root;
}

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
  Word *root = NULL;
  char buf[20];
  FILE *fp;
  if ((fp = fopen("anne_short.txt", "r")) == NULL) {
    // printf("AAA7");
    printf("failed to open the file");
    exit(1);
  }

  while (read_word(fp, buf) > 0) {
    // printf("AAA8");
    root = add_node(buf, root);
    // printf("%d\n", len);
  }
  // printf("AAA6");
  print_nodes(root);
  fclose(fp);
  /* free_nodes(root); */
  return 0;
}

// AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA