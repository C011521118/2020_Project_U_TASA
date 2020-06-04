#include <stdio.h>
#include <stdlib.h>


void p_func(int *list) {
  for(int i = 0; i < 5; i++) {
    *(list + i) *= 2;
  }
}


int main() {
  int *list;

  list = (int *)malloc(sizeof(int) * 5);

  for(int i = 0; i < 5; i++) {
    *(list + i) = i;
  }

  p_func(list);

  for(int i = 0; i < 5; i++) {
    printf("%d\n", *(list + i));
  }

  free(list);
}
