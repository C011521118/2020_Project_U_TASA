#include <stdio.h>

#define TIME 100


/* fizz buzz problem */


int main() {
  int i;

  for(i = 1; i <= TIME; i++) {
    printf("[%d]:", i);
    if(i % 5 == 0 && i % 3 == 0) {
      printf("Fizz Buzz\n");
    }else if(i % 5 == 0) {
      printf("Buzz\n");
    }else if(i % 3 == 0) {
      printf("Fizz\n");
    }else{
      printf("%d\n", i);
    }
  }
}
