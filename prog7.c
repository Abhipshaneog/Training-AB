#include<stdio.h>

int main(){
  
   int score;
   char grade;

   printf("Enter your score: ");
   scanf("%d", &score);

   printf("Enter your grade(A, B, C, D, E or F) :  ");
   scanf(" %c", &grade);

    printf("Your score is %d and Grade is %c.\n", score, grade);


   return 0;




}
