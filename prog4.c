#include<stdio.h>

int main(){

  int a,b;
  int max;

  printf("Enter two integers: ");
  scanf("%d %d", &a, &b);

  max= (a > b) ? a : b;

  printf("Maximum of %d and %d is %d\n", a, b, max);

  return 0;



}
