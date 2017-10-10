#include <stdio.h>
 
void fact(){
  int c, n=9, fact = 1;
 
  for (c = 1; c <= n; c++)
    fact = fact * c;
 
  printf("Factorial of %d = %d\n", n, fact);
 
 // return 0;
}
