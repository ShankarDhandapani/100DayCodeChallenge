#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int size_of_the_array, *array, i, j, count = 0;
  
  printf("Enter the size of the array");
  scanf("%d", &size_of_the_array);
  
  array = (int*) calloc(size_of_the_array, sizeof(int));
  
  printf("\nEnter %d elements", size_of_the_array);
  for(i = 0; i < size_of_the_array; i++){
    scanf("%d", &array[i]);
  }
  
  for(i = 0; i < size_of_the_array ; i++){
    for(j = i + 1; j < size_of_the_array; j++){
      if(array[i] != array[j]){
        count++;
      }
    }
  }
  
  printf("\nResult is %d", count);
  return 0;
}
