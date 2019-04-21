#include <stdio.h>
#include <stdlib.h>
int main(void) {
  int *arr, n, search_element, i, flag = 0;
  
  printf("Enter the size of the array");
  scanf("%d", &n);
  
  arr = (int*) calloc(n, sizeof(int));
  
  printf("\nInput %d integer numbers", n);
  
  if(arr != NULL){
    for(i = 0; i < n; i++){
      scanf("%d", &arr[i]);
    }
    
    printf("\nEnter the element to be searched");
    scanf("%d", &search_element);
    
    printf("\n%lu bytes allocated successfully", (n * sizeof(int)));
    
    for(i = 0; i < n; i++){
      if(search_element == arr[i]){
        flag = 0;
        printf("\nElement %d found at index %d", search_element, i);
        break;
      }else{
        flag = 1;
      }
    }
    if(flag == 1){
      printf("\nThe element %d is not found in the given array", search_element);
    }
  }
  
  return 0;
}
