#include <stdio.h>

#define MAX 10


/* stack */



typedef struct Data_ {
  int data[MAX];
  int index;
}Data;



void init_stack(Data *stack);
int push(Data *stack, int data);
int pop(Data *data);


int main() {
  Data stack, *stack_;
  int s_data;

  stack_ = &stack;

  init_stack(stack_);

  /* push */
  for(int i = 0; i < MAX + 5; i++) {
    push(stack_, i);
  }

  printf("[pop]\n");
  /* pop */
  for(int i = 0; i < MAX + 5; i++) {
    pop(stack_);
  }
}




void init_stack(Data *stack) {
  for(int i = 0; i < MAX; i++) {
    stack->data[i] = 0;
  }
  stack->index = 0;
}



int push(Data *stack, int data) {
  if(stack->index >= MAX) {
    return -1;
  }

  stack->data[stack->index] = data;
  stack->index++;
  return 0;
}



int pop(Data *stack) {
  if(stack->index <= 0) {
    return -1;
  }

  stack->index--;
  printf("%d\n", stack->data[stack->index]);
  return 0;
}
