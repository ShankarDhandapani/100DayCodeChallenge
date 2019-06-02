#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int *array, size_of_the_array, i, flag = 0;
  
  printf("Enter the size of the array");
  scanf("%d", &size_of_the_array);
  
  printf("Enter %d elements", size_of_the_array);
  for(i = 0; i < size_of_the_array; i++){
    scanf("%d", &array[i]);
  }
  
  for(i = 0; i < size_of_the_array; i++){
    while((array[i] % 2) == 0){
      array[i] /= 2;
    }
    
    while((array[i] % 3) == 0){
      array[i] /= 3;
    }
    
    if(i != 0){
      if(array[0] != array[i]){
        flag = 1;
      }
    }
  }
  
  if(flag != 1){
    printf("\nYes, it’s possible to make all numbers of an array equal");
  } else {
    printf("\nNo, it’s not possible to make all numbers of an array equal");
  }
  return 0;
}
