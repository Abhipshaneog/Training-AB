//Print score and determine corresponding grade

#include<stdio.h>

int main(){
  
  int score;
  char grade;

  printf("Enter your score(0-100): ");
  scanf("%d", &score);

  if(score<=100 && score>=90){
    printf("Your grade: A\n");
  }

  else if(score<=89 && score>=80){
      printf("Your grade: B\n");
    }

  else if(score<=79 && score>=70){
      printf("Your grade: C\n");
    }
  else if(score<=69 && score>=60){
        printf("Your grade: D\n");
      }
  else{
        printf("Your grade: F\n");
      }

  return 0;



}

