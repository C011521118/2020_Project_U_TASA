#include <stdio.h>
#include <stdlib.h>    /* qsort() */


#define COLUMN 10
#define ROW    3
#define CODE   0
#define DATE   1
#define VALUE  2


/* Control break */


/* data : code, date, value */
int data[COLUMN][ROW] = {{000001, 20200105, 35000},
			 {000002, 20200105, 60000},
			 {000002, 20200115, 48000},
			 {000003, 20200116, 21000},
			 {000001, 20200123, 81000},
			 {000003, 20200201, 44000},
			 {000003, 20200202, 8000},
			 {000001, 20200209, 13000},
			 {000002, 20200209, 41000},
			 {000003, 20200215, 50000}};



int code_cmp(const void *a, const void *b);
void ctrl_break(int data[][ROW]);
void print_data(int data[][ROW]);



int main() {

  /* sort code in asc */
  qsort(data, COLUMN, sizeof(data[CODE]), code_cmp);

  print_data(data);
  putchar('\n');

  ctrl_break(data);

  return 0;
}




int code_cmp(const void *a, const void *b) {
  return *(int *)a - *(int *)b;
}



/* control break */
void ctrl_break(int data[][ROW]) {
  int code, sum, i;

  i = 0;
  while(i != COLUMN) {
    sum = 0;
    code = data[i][CODE];            /* set code */
    while(code == data[i][CODE]) {   /* repeat while code is equal */
      sum += data[i][VALUE];
      i++;
    }
    printf("[%06d]: %d\n", code, sum);
  }
}



void print_data(int data[][ROW]) {
  int code = 0;

  for(int i = 0; i < COLUMN; i++) {
    if(code != data[i][CODE]) {
      printf("====[%06d]====\n", data[i][CODE]);
      code = data[i][CODE];
    }
    for(int j = DATE; j < ROW; j++) {
      printf("%d\t", data[i][j]);
    }
    putchar('\n');
  }
}
