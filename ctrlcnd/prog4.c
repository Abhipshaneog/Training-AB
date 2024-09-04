/*Write a program that takes a temperature value as input and uses if statements to print advice based on the temperature*/

#include<stdio.h>

int main(){
   
   float temp;

   printf("Enter the temperature: ");
   scanf("%f", &temp);

  if(temp>30){
    printf("It's hot outside, stay hydrated!");
 }
  else if(30>=temp>=20){
     printf("The weather is nice and warm.");
   }
  else if(19>=temp>=10){
    printf("It's a bit chilly, wear a jacket.");
   }
  else{
      printf("It's cold outside, stay warm!");
   }

  return 0;

}
