#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
  int size_of_the_array, iteration_count = 0, *array, **posible_combinations, max_size, i, j;
  
  printf("Enter the size of the array");
  scanf("%d", &size_of_the_array);
  
  max_size = size_of_the_array * size_of_the_array;
  
  array = (int*) calloc(size_of_the_array, sizeof(int));
  
  posible_combinations = (int**) calloc(max_size, sizeof(int*));
  for(i = 0; i < max_size; i++){
    posible_combinations[i] = (int*) calloc(2,sizeof(int));
  }
  
  printf("Enter %d elements", size_of_the_array);
  for(i = 0; i < size_of_the_array; i++){
    scanf("%d",&array[i]);
  }
  
  for(i = 0; i < size_of_the_array; i++){
    for(j = 0; j < size_of_the_array; j++){
      posible_combinations[iteration_count][0] = array[i];
      posible_combinations[iteration_count++][1] = array[j];
    }
  }
  
  for(i = 0; i < max_size; i++){
    for(j = i + 1; j < max_size; j++){
      if(posible_combinations[i][0] == posible_combinations[j][0] && posible_combinations[i][1] == posible_combinations[j][1]){
        posible_combinations[j][0] = -1;
      }
    }
  }
  
  printf("\nThe following pairs are unique pairs");
  for(i = 0, iteration_count = 0; i < max_size; i++){
    if(posible_combinations[i][0] != -1){
      printf("\n(%d,%d)", posible_combinations[i][0], posible_combinations[i][1]);
      iteration_count++;
    }
  }    
  
  printf("\nSo the result is %d", iteration_count);
  return 0;
}
