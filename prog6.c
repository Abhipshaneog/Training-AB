#include<stdio.h>

int main(){

   float weight;
   float height;
   

   printf("Enter your Weight(in kgs): ");
   scanf("%f", &weight);

   printf("Enter your Height(in meters): ");
   scanf("%f", &height);

   float bmi= weight/(height*height);
   
   printf("The Body Mass Index (BMI) based on user input for weight (in kg) and height (in meters): %f\n", bmi); 


   return 0;
}
