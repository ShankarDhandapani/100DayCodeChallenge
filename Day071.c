#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int size_of_the_array, i, *array, temp;
  
  printf("Enter the size of the array");
  scanf("%d", &size_of_the_array);
  
  array = (int*) calloc(size_of_the_array, sizeof(int));
  
  printf("\nEnter %d elements", size_of_the_array);
  for(i = 0; i < size_of_the_array; i++){
    scanf("%d", &array[i]);
  }
  
  for(i = 0; i < size_of_the_array; i++){
    for(int a = i + 1; a < size_of_the_array; a++){
      if(array[i] > array[a]){
        temp = array[i];
        array[i] = array[a];
        array[a] = temp;
      }
    }
  }
  
  printf("\nSmallest pair is [%d,%d]", array[0], array[1]);
  printf("\nSum of the smallest pair is %d", (array[0] + array[1]));
  return 0;
}
