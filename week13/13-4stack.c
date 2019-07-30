#include <stdio.h>
#include <stdlib.h>

#define BUF_SIZE 20

struct stack {
  int buf[BUF_SIZE];
  int top;
};

int push(struct stack *s, int v) {
  if (s->top >= BUF_SIZE) return -1;
  s->buf[s->top++] = v;
  return 1;
}

int pop(struct stack *s) {
  if (s->top == 0) return -1;
  int v;
  v = s->buf[--s->top];
  return v;
}

void display(struct stack s) {
  while (s.top > 0) {
    printf("%d\n", s.buf[--s.top]);
  }
}

int main(void) {
  struct stack s;
  s.top = 0;
  for (int i = 1; i <= 5; i++) {
    if (push(&s, i) == -1) {
      printf("Error");
      exit(1);
    }
  }
  display(s);

  printf("========================\n");

  for (int j = 0; j < 2; j++) {
    if (pop(&s) == -1) {
      printf("Error");
    }
  }
  display(s);

  return 0;
}