#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct word {
  char name[20];
  struct word *next;
  int count;
} Word;

void print_nodes(Word *p) {
  while (p != NULL) {
    printf("%s %d\n", p->name, p->count);
    p = p->next;
  }
}

Word *create_word() {
  Word *p = (Word *)malloc(sizeof(Word));
  if (p == NULL) {
    printf("failed to allocate the memory");
    exit(1);
  }
  return p;
}

Word *sortByLexicalOrder(Word *root) {
  Word *head = root;
  Word *back;
  int nodes_len = 0;
  int i, j, k = 0;
  //   Word *tmp;
  char tmpary[20];
  int tmpcnt;
  //   double sum = 0;
  while (root != NULL) {
    nodes_len++;
    root = root->next;
  }
  for (i = 0; i < nodes_len - 1; i++) {
    for (j = nodes_len - 1; j > i; j--) {
      root = head;
      for (k = 0, root = head; k < j - 1; k++) {
        root = root->next;
      }
      back = root;        // 1つ前のノードをbackに格納
      root = root->next;  //比較先のノードをpに格納

      // backとpを絶対値に関して比較
      //   if (fabs(root->data) < fabs(back->data)) {
      //     tmp = root->data;
      //     root->data = back->data;
      //     back->data = tmp;
      //   }
      if (strcmp(root->name, back->name) < 0) {
        // strcpy(tmp->name, root->name);
        strcpy(tmpary, root->name);
        // tmp->count = root->count;
        tmpcnt = root->count;
        strcpy(root->name, back->name);
        root->count = back->count;
        // strcmp(back->name, tmp->name);
        strcpy(back->name, tmpary);
        // back->count = tmp->count;
        back->count = tmpcnt;
      }
    }
  }

  root = head;

  return root;
  // Word *ptr1=root;          // doesn't work this way...
  // Word * ptr2 =root ->next;
  // if((strcmp(ptr1->name, ptr2->name))>0){
  //     Word *temp;
  //     *temp=*ptr1;
  //     ptr1=ptr2;
  //     ptr2=temp;
  // }

  // Word *ptr1=root;
  // root =root ->next;
  // ptr1->next=root->next;
  // root->next= ptr1;
}

Word *add_node(char buf[], Word *root) {
  Word *w = create_word();
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
  //   printf("abc1");
  while (read_word(fp, buf) > 0) {
    root = add_node(buf, root);
  }

  //   printf("333");
  print_nodes(root);
  fclose(fp);

  //   free_nodes(root);
  return 0;
}
//   printf("abc2");

//   Word *ptr1 = root;
//   Word *ptr2 = root->next;
//   //   Word *temp;
//   //   *temp.name = ptr1->name;
//   //   ptr1->name = ptr2->name;
//   //   ptr2->name = temp->name;
//   Word *tmp;
//   char p[20];
//   //   Word *p ;
//   //   strcpy(tmp->name, ptr2->name);
//   //   p = ptr2->name;
//   strcpy(p, ptr2->name);
//   tmp->count = ptr2->count;
//   //   strcpy(ptr2->name, ptr1->name);
//   strcpy(ptr2->name, ptr1->name);
//   ptr2->count = ptr1->count;
//   //   strcmp(ptr1->name, tmp->name);
//   strcpy(ptr1->name, p);
//   ptr1->count = tmp->count;