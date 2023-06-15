#include <stdio.h>

int updatePointer(int ***p); // receive value of pointer to pointer, p => y => x = 0;

int updatePointer(int ***p) { // first * get address value, second * another address value, third * get value of variable which pointers points
   if(***p == 12) return 0;
  
    return ***p = ***p + 1;
}

void main() {
  int x    = 0;
  int *y   = &x; 
  int **p  = &y; // pointer to pointer
  
  while(updatePointer(&p) != 0) printf("%d\t", **p); // *p will print value of x
}
