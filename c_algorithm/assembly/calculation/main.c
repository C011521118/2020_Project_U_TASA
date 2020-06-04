#include <stdio.h>


int _add(int a, int b);
int _sub(int a, int b);
int _mul(int a, int b);
int _div(int a, int b);
int _mod(int a, int b);



int main() {
  int x, y;

  printf("(x, y) = ");
  scanf("%d %d", &x, &y);

  printf("add: %d\n", _add(x, y));
  printf("sub: %d\n", _sub(x, y));
  printf("mul: %d\n", _mul(x, y));
  printf("div: %d\n", _div(x, y));
  printf("mod: %d\n", _mod(x, y));

}
