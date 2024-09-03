#include<stdio.h>


int main(){

  float temp_in_celcius;
  
  printf("Enter the temperature to convert from Celcius to Fahrenheit: ");
  scanf("%f", &temp_in_celcius);

  float temp_in_fahrenheit=temp_in_celcius*(1.8)+32;
  printf("The temperature in Fahrenheit after converting from Celcius is %f\n", temp_in_fahrenheit);

  return 0;
 
}

