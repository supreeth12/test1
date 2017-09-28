#include <stdio.h>
 
void fact(){
  int c, n, fact = 1;
 
  printf("\nEnter a number to calculate it's factorial\n");
  scanf("%d", &n);
 
  for (c = 1; c <= n; c++)
    fact = fact * c;
 
  printf("Factorial of %d = %d\n", n, fact);
 
 // return 0;
}
