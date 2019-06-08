#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int *array, size_of_array, i, count = 0;
  
  printf("Enter the size of the array");
  scanf("%d", &size_of_array);
  
  array = (int*) calloc(size_of_array, sizeof(int));
  
  printf("\nEnter %d elements", size_of_array);
  for(i = 0; i < size_of_array; i++){
    scanf("%d", &array[i]);
    if(i != 0){
      if(array[i - 1 - count] == array[i]){
        array[i] = array[i - 1] + 1;
        count++;
      }else{
        count = 0;
      }
    }
  }
  
  printf("\nResult after replacing duplicates");
  for(i = 0; i < size_of_array; i++){
    printf("\n%d", array[i]);
  }
  
  return 0;
}
