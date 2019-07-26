#include <stdio.h>

struct word {
  char name[20];
  struct word *next;
};
typedef struct word Word;

void print_nodes(Word *p) {
  while (p) {
    printf("%s", p->name);
    p = p->next;
  }
  printf("\n");
}

int main(void) {
  Word *root = NULL;
  Word node1 = {"one", NULL};
  Word node2 = {"two", NULL};
  Word node3 = {"three", NULL};
  root = &node1;
  node1.next = &node2;
  node2.next = &node3;
  print_nodes(root);

  return 0;
}
