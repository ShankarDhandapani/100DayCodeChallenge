#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n, *arr, new_number, index, temp, i;
  
  printf("Enter the size of the array");
  scanf("%d", &n);
  
  arr = (int*) calloc((n + 1), sizeof(int));
  
  if(arr != NULL){
    printf("\nInput %d elements", n);
    for(i = 0; i < n; i++){
      scanf("%d", &arr[i]);
    }
    
    printf("\nEnter the value to be inserted");
    scanf("%d", &new_number);
    printf("\nEnter the index, after the index, value will be inserted");
    scanf("%d", &index);
    
    printf("\nThe current list of the array");
    for(i = 0; i < n; i++){
      printf("%d\t", arr[i]);
    }
    
    for(i = 0; i < (n + 1); i++){
      if(i > index){
        temp = arr[i];
        arr[i] = new_number;
        new_number = temp;
      }
    }
    
    printf("\nAfter Insert the element the new list is");
    for(i = 0; i < (n + 1); i++){
      printf("%d\t", arr[i]);
    }
  }
  return 0;
}
