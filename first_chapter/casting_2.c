#include <stdio.h>

/* casting int to float, float to int*/
void main() {
  int   y = 10;
  float x = (float)y;

  printf("%.2f\n", x);

  float a = 20.34;
  int   b = (int)a;

  printf("%d\n", b);
}
