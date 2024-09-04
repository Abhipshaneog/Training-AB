#include<stdio.h>
#include<string.h>
#define MAX 5

int main(){
  
  int arr1[MAX]= {1,2};
  int arr2[]={1,6,7,9,10, 8, 3, 4,2};
  int arr3[MAX];
  int index;
  int size= sizeof(arr2)/sizeof(int);

/*  printf("%u %u %u\n", arr1, &arr1, &arr1[0]);
  printf("%u %u %u %u %u\n", arr1+0, arr1+1, arr1+2, arr1+3, arr1+4);


  printf("%d %d %d %d %d\n", arr1[0], arr1[1], arr1[2], arr1[3], arr1[4]);

  printf("%d %d %d %d %d\n", *(arr1+0), *(arr1+1), *(arr1+2), *(arr1+3), *(arr1+4));


 printf("%d %d", arr1[-1], arr1[9]);
*/
printf("Elements of first array: ");
for(index=0;index<MAX; index++){
printf("%d ", arr1[index]);
}
 printf("\n");

  printf("Elements of second array: ");
  for(index=0;index<size; index++){
  printf("%d ", arr2[index]);
  }
   printf("\n");

   memset(arr3, 1, sizeof(arr3));
 printf("Elements of third array: ");
  for(index=0;index<MAX; index++){
  printf("%d ", arr3[index]);
  }
   printf("\n");



  printf("\n\n");


  return 0;

}
