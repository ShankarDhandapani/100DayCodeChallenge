#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n, *arr, i, temp;
  
  printf("Enter the size of the array");
  scanf("%d", &n);
  
  arr = (int*) calloc((n + 1), sizeof(int));
  
  if(arr != NULL){
    printf("\nInput %d elements", n);
    for(i = 0; i < n; i++){
      scanf("%d", &arr[i]);
    }
    
    printf("\nEnter the value to be inserted");
    scanf("%d", &arr[n]);
    
    for(i = 0; i < n; i++){
      for(int a = i + 1; a < n; a++){
        if(arr[i] > arr[a]){
          temp = arr[i];
          arr[i] = arr[a];
          arr[a] = temp;
        }
      }
    }
    
    printf("\nThe current list of the array after sorting");
    for(i = 0; i < n; i++){
      printf("%d\t", arr[i]);
    }
    
    for(i = 0; i < (n + 1); i++){
      for(int a = i + 1; a < (n + 1); a++){
        if(arr[i] > arr[a]){
          temp = arr[i];
          arr[i] = arr[a];
          arr[a] = temp;
        }
      }
    }
    
    printf("\nAfter Insert the element the new list is");
    for(i = 0; i < (n + 1); i++){
      printf("%d\t", arr[i]);
    }
    
    
    
  }
  return 0;
}
