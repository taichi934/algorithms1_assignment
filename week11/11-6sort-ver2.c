#include <stdio.h>

#include <stdlib.h>
#include <string.h>

struct word {
  char name[20];
  struct word *next;
  int count;
};
typedef struct word Word;

void print_nodes(Word *p) {
  while (p != NULL) {
    printf("%s %d\n", p->name, p->count);
    p = p->next;
  }
}

Word *create_word(char buf[]) {
  Word *p = (Word *)malloc(sizeof(Word));
  if (p == NULL) {
    printf("failed to allocate the memory");
    exit(1);
  }
  return p;
}

Word *sortByLexicalOrder(Word *root) {
  Word *ptr1 = root;        // point the node to compare with ptr1
  Word *ptr2 = root->next;  // point the node to insert
  Word *prevPtr1;
  char tmpary[20];
  int tmpcnt;
  while (ptr2->next != NULL) {
    ptr1 = root;
    while (ptr1 != ptr2) {
      // if (strcmp(ptr1->name, ptr2->name) < 0) {
      // }
      if (strcmp(ptr1->name, ptr2->name) < 0) {
        prevPtr1 = ptr1;
        ptr1 = ptr1->next;

        prevPtr1->next = ptr2;
        ptr2->next = ptr1;
        ptr1->next = ptr2->next;
      } else {
        strcpy(tmpary, ptr2->name);
        tmpcnt = ptr2->count;
        strcpy(ptr2->name, ptr1->name);
        ptr2->count = ptr1->count;
        strcpy(ptr1->name, tmpary);
        ptr1->count = tmpcnt;
        break;
      }
    }
    ptr2 = ptr2->next;
  }
  return root;
  //   Word *ptr = root;
  //   while (ptr->next != NULL) {
  //     if (strcmp(w->name, ptr->name) < 0) {
  //       // Word *temp = malloc(sizeof(Word *));
  //       Word *temp;
  //       temp = ptr;
  //       ptr = w;
  //       w->next = temp;
  //       // free(temp);
  //       return root;
  //     }
  //     ptr = ptr->next;
  //   }
  //   ptr->next = w;
  //   return root;
}

Word *add_node(char buf[], Word *root) {
  Word *w = create_word(buf);
  //   w->next = NULL;  // necesarry to specify the end of linked list
  w->count = 1;
  w->next = NULL;
  strcpy(w->name, buf);
  if (root == NULL) {
    root = w;
    return root;
  } else {
    Word *ptr;  // need another pointer other than root itself to loop out
    ptr = root;
    while (ptr->next != NULL) {
      if (strcmp(ptr->name, buf) == 0) {
        (ptr->count)++;
        free(w);
        return root;
      }
      ptr = ptr->next;
    }
    ptr->next = w;
    root = sortByLexicalOrder(root);
    // ptr->next = w;  // add a node to end of the linked list
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
  /* free_nodes(root); */
  return 0;
}