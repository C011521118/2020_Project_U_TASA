#include <stdio.h>
#include <stdlib.h>    /* for rand() */
#include <math.h>      /* for pow() */
#include <time.h>      /* for time() */

#define STUDENT 10
#define SUBJECT 5



/* calcualte average point, standard deviation, and deviation value */

/*---------------------------------*/
/*    Please compile with '-lm'    */
/*---------------------------------*/



void init_data(int data[][SUBJECT]);
void calc_avg(int data[][SUBJECT], double avg[SUBJECT]);
void calc_std_dev(int data[][SUBJECT],
		  double std_dev[SUBJECT], double avg[SUBJECT]);
void calc_dev(int data[][SUBJECT], double dev[][SUBJECT],
	      double std_dev[SUBJECT], double avg[SUBJECT]);

void print_data(int data[][SUBJECT]);
void print_eval(double avg[SUBJECT]);
void print_dev(double dev[][SUBJECT]);



int main() {
  int data[STUDENT][SUBJECT];
  double avg[SUBJECT], std_dev[SUBJECT],
    dev[STUDENT][SUBJECT];

  printf("===Scores===\n");
  init_data(data);
  print_data(data);

  printf("\n===Average===\n");
  calc_avg(data, avg);
  print_eval(avg);

  printf("\n===Standard Deviation===\n");
  calc_std_dev(data, std_dev, avg);
  print_eval(std_dev);

  printf("\n===Deviation===\n");
  calc_dev(data, dev, std_dev, avg);
  print_dev(dev);

  return 0;
}



void init_data(int data[][SUBJECT]) {
  srand((unsigned int)time(NULL));

  for(int i = 0; i < STUDENT; i++) {
    for(int j = 0; j < SUBJECT; j++) {
      data[i][j] = rand() % 100;
    }
  }
}



/* calculate average point */

void calc_avg(int data[][SUBJECT], double avg[SUBJECT]) {
  double tmp;
  for(int j = 0; j < SUBJECT; j++) {
    tmp = 0.0;
    for(int i = 0; i < STUDENT; i++) {
      tmp += (double)data[i][j];
    }
    avg[j] = tmp / STUDENT;
  }
}



/* calculate standard deviation */

void calc_std_dev(int data[][SUBJECT],
		  double std_dev[SUBJECT], double avg[SUBJECT]) {
  double var;
  for(int j = 0; j < SUBJECT; j++) {
    var = 0.0;
    for(int i = 0; i < STUDENT; i++) {
      var += pow((data[i][j] - avg[j]), 2.0);
    }
    var /= STUDENT;
    std_dev[j] = pow(var, 0.5);
  }
}



/* calculate deviation */

void calc_dev(int data[][SUBJECT], double dev[][SUBJECT],
	      double std_dev[SUBJECT], double avg[SUBJECT]) {
  for(int i = 0; i < STUDENT; i++) {
    for(int j = 0; j < SUBJECT; j++) {
      dev[i][j] = ((data[i][j] - avg[j]) / std_dev[j]) * 10 + 50;
    }
  }
}



/* output any data */

void print_data(int data[][SUBJECT]) {
  for(int i = 0; i < STUDENT; i++) {
    printf("[%d]: ", i+1);
    for(int j = 0; j < SUBJECT; j++) {
      printf("%d ", data[i][j]);
    }
    putchar('\n');
  }
}



void print_eval(double data[SUBJECT]) {
  for(int i = 0; i < SUBJECT; i++) {
    printf("[Sub%d]: %.2lf\n", i+1, data[i]);
  }
}



void print_dev(double dev[][SUBJECT]) {
  for(int i = 0; i < STUDENT; i++) {
    printf("[%d]: ", i+1);
    for(int j = 0; j < SUBJECT; j++) {
      printf("%.2lf  ", dev[i][j]);
    }
    putchar('\n');
  }  
}
