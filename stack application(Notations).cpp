#include <stdio.h>
#include <stdlib.h>
int count = 0;
struct stack 
{
	int items[10];
	int top;
};
typedef struct stack st;

void createEmptyStack(st *s) 
{
  s->top = -1;
}
int isfull(st *s) 
{
  if (s->top == 10 - 1)
    return 1;
  else
    return 0;
}
int isempty(st *s)
{
  if (s->top == -1)
    return 1;
  else
    return 0;
}
void push(st *s, int newitem) 
{
  if (isfull(s))
{
    printf("STACK FULL");
} else
{
    s->top++;
    s->items[s->top] = newitem;
}
  count++;
}
void pop(st *s) {
  if (isempty(s)) {
    printf("\n STACK EMPTY \n");
  } else {
    printf("Item popped= %d", s->items[s->top]);
    s->top--;
  }
  count--;
  printf("\n");
}

void printStack(st *s) {
  printf("Stack: ");
  for (int i = 0; i < count; i++) {
    printf("%d ", s->items[i]);
  }
  printf("\n");
}

int main() {
  int ch;
  st *s = (st *)malloc(sizeof(st));

  createEmptyStack(s);

  push(s, 27);
  push(s, 02);
  push(s, 05);
  push(s, 01);

  printStack(s);

  pop(s);

  printf("\nAfter popping out\n");
  printStack(s);
}