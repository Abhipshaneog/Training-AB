   #include<stdio.h>
  
   int main(){
  
     int a,b,c;
     int max;
  
     printf("Enter two integers: ");
     scanf("%d %d %d", &a, &b, &c);
 
    max= (a > b) ? ((a>c) ? a : c)  : ((b > c)? b : c);
 
    printf("Maximum of %d, %d and %d is %d\n", a, b, c, max);
 
    return 0;
  }


