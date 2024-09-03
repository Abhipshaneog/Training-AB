#include<stdio.h>
#include<stdlib.h>



int main(){

  int a;
  int b;
  int ret_val;


  printf("Enter two integer numbers\n");

  scanf("%d %d", &a, &b);

 ret_val =  printf("The sum of %d and %d is %d \n",a,b,a+b);

 printf("Numbers of character printed: %d \n", ret_val);


  return 0;
}
