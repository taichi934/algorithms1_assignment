#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct word {
  char name[20];
  int count;
  struct word *next;
};
//
// int count = 0;

typedef struct word Word;

int read_word(FILE *pf, char buf[20]);

void print_nodes(Word *root);

void free_nodes(Word *root);

Word *add_node(char buf[20], Word *root);

Word *create_word(char buf[20]);

int main(void) {
  Word *root = NULL;

  char buf[20];
  FILE *fp;
  fp = fopen("anne_short.txt", "r");

  if (fp == NULL) {
    printf("File read error!\n");
    exit(EXIT_FAILURE);
  }

  while (read_word(fp, buf) > 0) {
    root = add_node(buf, root);
  }

  print_nodes(root);

  fclose(fp);

  free_nodes(root);

  //    printf("%d", count);
  return EXIT_SUCCESS;
}

Word *add_node(char buf[20], Word *root) {
  if (root == NULL) {
    root = create_word(buf);
  } else {
    Word *node = root, *node0, *word;
    while (node->next != NULL) {
      //            count++;
      if (strcmp(node->name, buf) == 0) {
        node->count++;
        return root;
      }

      if (strcmp(buf, root->name) < 0) {
        word = create_word(buf);
        word->next = root;
        root = word;
        return root;
      }

      node0 = node;
      node = node->next;

      if (strcmp(buf, node->name) < 0) {
        word = create_word(buf);
        node0->next = word;
        word->next = node;
        return root;
      }
    }

    if (strcmp(node->name, buf) == 0) {
      node->count++;
    } else if (strcmp(buf, root->name) < 0) {
      word = create_word(buf);
      word->next = root->next;
      root = word;
    } else {
      node->next = create_word(buf);
    }
  }
  return root;
}

Word *create_word(char buf[20]) {
  Word *word = malloc(sizeof(Word));
  strcpy(word->name, buf);
  word->count = 1;
  word->next = NULL;
  return word;
}

int read_word(FILE *pf, char buf[20]) {
  int buf_index = 0;
  char ch;
  while ((ch = fgetc(pf)) != EOF) {
    switch (ch) {
      case ' ':
      case ',':
      case '.':
      case '\n':
        if (buf_index == 0) continue;
        buf[buf_index] = '\0';
        break;
      default:
        buf[buf_index++] = ch;
        continue;
    }
    break;
  }
  return buf_index;
}

void print_nodes(Word *root) {
  while (root != NULL) {
    printf("%s, %d\n", root->name, root->count);
    root = root->next;
  }
}

void free_nodes(Word *root) {
  Word *word;
  while (root != NULL) {
    word = root;
    free(word);
    root = root->next;
  }
}