#include <stdio.h>
#include <stdlib.h>

#define BUF_SIZE 20

typedef struct queue {
  int front;
  int rear;
  int array[BUF_SIZE];
} Queue;

int enqueue(Queue *q, int v) {
  // overflow  (it can only contain BUF_SIZE-1 elements)
  if ((q->front - q->rear + BUF_SIZE) % BUF_SIZE == 1) return -1;
  q->array[q->rear] = v;
  q->rear = (q->rear + 1) % BUF_SIZE;
  return 1;
}

int dequeue(Queue *q) {
  if (q->front == q->rear) return -1;  // underflow
  int v = q->array[q->front];
  q->front = (q->front + 1) % BUF_SIZE;
  return v;
}

int display(Queue q) {
  int i = q.front;
  while (i != q.rear) {
    printf("%d\n", q.array[i++]);
  }
  return 1;
}

int main(void) {
  Queue q;
  q.front = 0;
  q.rear = 0;

  for (int i = 1; i <= 5; i++) {
    if (enqueue(&q, i) == -1) {
      printf("Error: Bufferoveflow!");
      exit(1);
    }
  }

  display(q);

  printf("========================\n");

  for (int j = 1; j <= 2; j++) {
    if (dequeue(&q) == -1) {
      printf("Error: Bufferunderflow!");
      exit(1);
    }
  }
  display(q);
  return 0;
}