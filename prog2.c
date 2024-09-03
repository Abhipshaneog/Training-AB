#include<stdio.h>

int main(){

  const float PI=3.14;
  int rad;

  printf("Enter the radius of the circle:  \n");
  scanf("%d", &rad);

  float area= PI*rad*rad;
  printf("Area of circle : %f\n", area);

  float circumference= 2*PI*rad;
  printf("Circumference of circle : %f\n", circumference);


 return 0;



}
