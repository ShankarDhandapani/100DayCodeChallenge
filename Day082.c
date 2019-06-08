#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int size_of_array, *array, flag = 0, result = 0, i, j;
  
  printf("Enter the size of the array");
  scanf("%d", &size_of_array);
  
  array = (int*) calloc(size_of_array, sizeof(int));
  
  printf("\nInput %d elements", size_of_array);
  for(i = 0; i < size_of_array; i++){
    scanf("%d", &array[i]);
    if(i != 0 && array[i] == array[i - 1] && flag != 1){
      flag = 1;
    }
  }
  
 if(flag != 0){
    for(i = 0; i < size_of_array; i++){
      for(j = i + 1; j < size_of_array; j++){
        if(array[i] == array[j]){
          result++;
        }
        break;
      }
    }
  }
  
  printf("\nResult is %d", result);
  
  return 0;
}
