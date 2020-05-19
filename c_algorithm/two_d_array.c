#include <stdio.h>

#define ROW 9
#define COLUMN 9


/* teo dimensional array */


int main() {
  int data[ROW][COLUMN];

  for(int i = 0; i < ROW; i++) {
    for(int j = 0; j < COLUMN; j++) {
      data[i][j] = (i + 1) * (j + 1);
    }
  }

  printf("[Times Tables]\n");
  for(int i = 0; i < ROW; i++) {
    for(int j = 0; j < COLUMN; j++) {
      printf("%d  ", data[i][j]);
    }
    putchar('\n');
  }
}
