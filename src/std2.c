#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double mean(double* x, int len){
  double sum = 0;
  for(int i = 0; i < len; i++) {
    sum = sum + x[i];
  }
  return sum/len;
}

double std(double*x, int len) {
  double avg = mean(x, len);
  double sum = 0;
  if(len <= 1) {
    return 0.0;
  }
  
  for(int i = 0; i < len; i++) {
    sum = sum + (x[i] - avg) * (x[i] - avg);
  }
  return sqrt(sum/(len - 1));
}

int main() {
  double values[100];
  int i = 0;
  printf("Please enter one number per line, type STOP to end: ");
  while (1) {
    int n = scanf("%lf", &values[i]);
    if (n == 1) {
      i++;
    } else {
      printf("the mean is: %f\n", mean(values, i));
      printf("the standard deviation is: %f\n", std(values, i));
      break;
    }
  }
  return 0;
}
