#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct word {
  char name[20];
  struct word *next;
  int count;
} Word;

// Word *sortByLexicalOrder(Word *root) //doesn't need this

void print_nodes(Word *p) {
  while (p != NULL) {
    printf("%s %d\n", p->name, p->count);
    p = p->next;
  }
}

Word *create_word(char buf[20]) {
  Word *p = malloc(sizeof(Word));
  if (p == NULL) {
    printf("failed to allocate the memory");
    exit(1);
  }
  strcpy(p->name, buf);
  p->count = 1;
  // necesarry to specify the end of linked list
  p->next = NULL;
  return p;
}

Word *add_node(char buf[], Word *root) {
  if (root == NULL) {
    root = create_word(buf);
  } else {
    // ptr: need another pointer other than root itself to loop out
    Word *ptr = root, *prevPtr, *w;
    while (ptr->next != NULL) {
      if (strcmp(ptr->name, buf) == 0) {
        (ptr->count)++;
        return root;
      }

      if (strcmp(buf, root->name) < 0) {
        w = create_word(buf);
        w->next = root->next;
        root = w;
        return root;
      }

      prevPtr = ptr;
      ptr = ptr->next;

      if (strcmp(buf, ptr->name) < 0) {
        w = create_word(buf);
        w->next = ptr;
        prevPtr->next = w;
        return root;
      }
    }
    // when root points linked list with only one node
    if (strcmp(root->name, buf) == 0) {
      root->count++;
    } else if (strcmp(buf, root->name) < 0) {
      w = create_word(buf);
      w->next = root;
      root = w;
    } else {
      root->next = create_word(buf);
    }
    // root = sortByLexicalOrder(root);
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
    }
  }
  return index;
}

void free_nodes(Word *root) {
  Word *word;
  while (root != NULL) {
    word = root;
    free(word);
    root = root->next;
  }
}

int main(void) {
  Word *root = NULL;
  char buf[20];
  FILE *fp;

  if ((fp = fopen("anne_short.txt", "r")) == NULL) {
    printf("failed to open the file");
    exit(1);
  }
  while (read_word(fp, buf) > 0) {
    root = add_node(buf, root);
  }

  print_nodes(root);
  fclose(fp);

  free_nodes(root);

  return 0;
}
