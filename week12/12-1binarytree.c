#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct binary {
  char name[20];
  struct binary *left;
  struct binary *right;
  int count;
} Binary;

Binary *create_binary(char buf[20]) {
  Binary *node = malloc(sizeof(Binary));
  if (node == NULL) {
    printf("failed to allocate the memory");
    exit(1);
  }
  strcpy(node->name, buf);
  node->left = NULL;
  node->right = NULL;
  node->count = 1;
  return node;
}

Binary *add_word_binarytree(char buf[], Binary *root) {
  Binary *ptr;
  ptr = root;

  if (root == NULL) {
    root = create_binary(buf);
  } else {
    while (1) {
      if (strcmp(ptr->name, buf) == 0) {
        ptr->count++;
        break;
      } else if (strcmp(buf, ptr->name) < 0) {
        if (ptr->left == NULL) {
          ptr->left = create_binary(buf);
          break;
        }
        ptr = ptr->left;
      } else {
        if (ptr->right == NULL) {
          ptr->right = create_binary(buf);
          break;
        }
        ptr = ptr->right;
      }
    }
  }
  return root;
}

void print_binary(Binary *ptr) {
  if (ptr != NULL) {
    print_binary(ptr->left);
    printf("%s %d\n", ptr->name, ptr->count);
    print_binary(ptr->right);
  }
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

int main(void) {
  Binary *root;
  char buf[20];
  FILE *fp;

  if ((fp = fopen("anne.txt", "r")) == NULL) {
    printf("failed to open the file");
    exit(1);
  }
  while (read_word(fp, buf) > 0) {
    root = add_word_binarytree(buf, root);
  }

  print_binary(root);
  fclose(fp);

  //   free_nodes(root);
  return 0;
}
