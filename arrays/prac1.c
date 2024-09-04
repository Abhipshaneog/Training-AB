#include<stdio.h>

int main(){

    long long n;
	int sum=0;
    
	printf("Enter a positive number: ");
	scanf("%lld", &n);
    
    if(n<=0){
	  printf("The number must be positive.\n");
	  return 1;
	}

	while(n>0){
	   sum+=n%10;
	   n=n/10;
	}

	printf("The sum of the digits is: %d\n", sum);

    return 0;
}
