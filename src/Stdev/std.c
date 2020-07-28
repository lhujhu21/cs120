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

int main(int argc, const char* argv[]) {
  double values[argc];

  if (argc <= 1) {
    printf("usage: %s {list of numbers}\n", argv[0]);
    return 1;
  }
  
  for(int i = 1; i < argc; i++) {
    values[i - 1] = atof(argv[i]);
  }
  
  printf("mean of array: %f\n", mean(values, argc - 1));
  printf("standard deviation of array: %f\n", std(values, argc - 1));
  return(0);
}
