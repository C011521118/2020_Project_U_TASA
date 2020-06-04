#include <stdio.h>


void p_func(int *x) {
  *x *= 2;
  return;
}


int main() {
  int a = 3;

  printf("%d\n", a);

  p_func(&a);
  
  printf("%d\n", a);
}
