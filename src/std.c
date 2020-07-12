#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include "math.h"

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
  double x[] = {12,34,56,78,90};
  printf("mean of array: %f\n", mean(x, 5));
  printf("standard deviation of array: %f\n", std(x, 5));
  return(0);
}
