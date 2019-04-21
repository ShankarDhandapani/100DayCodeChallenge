#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n, *arr, i, sum[2], temp, flag = 0, j = 30;
  
  printf("Enter the size of the array");
  scanf("%d", &n);
  
  arr = (int*) calloc(n, sizeof(int));
 
 if(arr != NULL){
   printf("\nInput %d elements", n);
   for(i = 0; i < n; i++){
     scanf("%d", &arr[i]);
   }
   
   for(i = 0; i < n; i++){
     if(arr[i] < 0 && i != j){
       sum[0] = arr[i];
       temp = arr[i] * -1;
       j = i;
       i = 0;
     }
     if(arr[i] == temp){
       sum[1] = arr[i];
       flag = 1;
     }
   }
   
   if(flag  == 1){
     printf("subarray [%d,%d]\'s sum is 0", sum[0], sum[1]);
   }else{
     printf("no subarray yields 0 as sum");
   }
 }
  return 0;
}
