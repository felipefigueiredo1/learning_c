#include <stdio.h> 
#include <math.h> 
 
void add100(int* x) { 
  *x += 100; 
  } 
 
int main() { 
  float x = M_PI; 
  add100((int*) &x);
  printf("x = %f\n", x);
  printf("x after = %f\n", x); 
  return 0; 
} 
