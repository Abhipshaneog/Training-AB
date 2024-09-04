#include<stdio.h>
#include<math.h>

int main(){

    long long num;
	long long closestSquare;
	long long lowerSquare, upperSquare;


	long long lowerRoot, upperRoot;

	printf("enter a positive integer: ");
	scanf("%lld", &num);

	if(num<=0){
	printf("The number must be a positive integer.\n");
        return 1;
	}

     int sqrtNum=sqrt((int)num);

	 lowerSquare= sqrtNum*sqrtNum;
	 upperSquare= (sqrtNum+1)*(sqrtNum+1);

	 
    if (num - lowerSquare <= upperSquare - num) {
        closestSquare = lowerSquare;
    } else {
        closestSquare = upperSquare;
    }

  printf("The closest integer having a whole number square root is: %lld\n", closestSquare);

    return 0; 




}
