#include <stdio.h>
#include <stdlib.h>

int *arr, *frequency;

int main(void) {
  int n, i, j, count, flag = 0;
  
  printf("Enter the size of the array");
  scanf("%d", &n);
  
  arr = (int*) calloc(n, sizeof(int));
  frequency = (int*) calloc(n, sizeof(int));
  
  if(arr != NULL){
    printf("\nInput %d integer numbers", n);
    for(i = 0; i < n; i++){
      scanf("%d", &arr[i]);
      frequency[i] = -1;
    }
    for(i = 0; i < n; i++){
      count = 1;
      for(j = i + 1; j < n; j++){
        if(arr[i] == arr[j]){
          count++;
          frequency[j] = 0;
        }
      }
      if(frequency[i] != 0){
        frequency[i] = count;
        if(count > 1){
          flag = 1;
        }
      }
    }

    if(flag == 1){
      printf("\nThe unique elements are");
      for(i=0; i<n; i++){
        if(frequency[i] == 1){
          printf("\n%d ", arr[i]);
        }
      }
    }else{
      printf("\nno unique elements in the given array");
    }
  
  }
  
  return 0;
}
