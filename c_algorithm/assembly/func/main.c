#include <stdio.h>


void _odd_or_even(int num);


void _print_rslt(int num, int flag) {
  if(flag == 1) {
    printf("%d is even number.\n", num);
  }else{
    printf("%d is odd number.\n", num);
  }
}


int main() {
  int num;
  
  printf("Input: ");
  scanf("%d", &num);

  _odd_or_even(num);

  return 0;
}
