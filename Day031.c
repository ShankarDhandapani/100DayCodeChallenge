#include <stdio.h>
#include <stdlib.h>

int *arr, *frequency;

int main(void) {
  int n, i, j, count;
  
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
      }
    }
    
    for(int i = 0; i< n; i++){
      if(frequency[i] != 0){
        printf("%d occurs %d time(s)", arr[i], frequency[i]);
      }
    }

    
  
  }
  
  return 0;
}
