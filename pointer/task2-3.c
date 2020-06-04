#include <stdio.h>
#include <stdlib.h>


int main() {
  int **table;

  table = (int **)malloc(sizeof(int *) * 9);
  for(int i = 0; i < 9; i++) {
    *(table + i) = (int *)malloc(sizeof(int) * 9);
  }

  for(int i = 0; i < 9; i++) {
    for(int j = 0; j < 9; j++) {
      *(*(table + i) + j) = (i + 1) * (j + 1);
    }
  }

  for(int i = 0; i < 9; i++) {
    for(int j = 0; j < 9; j++) {
      printf("%d\t", *(*(table + i) + j));
    }
    putchar('\n');
  }

  for(int i = 0; i < 9; i++) {
    free(*(table + i));
  }
  free(table);
  
}
