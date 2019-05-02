#include <stdio.h>
#include <stdlib.h>

int check_presence_of_subarray(int *array, int size_of_array, int start_index, int sum_of_subarray){
  int end_index = -1, i, temp_sum = 0;
  for(i = start_index; i < size_of_array; i++){
    temp_sum += array[i];
    if(temp_sum == sum_of_subarray){
      end_index = i;
    }
    if(temp_sum > sum_of_subarray){
      break;
    }
  }
  return end_index;
}

int main(void) {
  int *array, sum_of_subarray, size_of_array, i, flag = 0, start_index, end_index;
  
  printf("Enter array length and sum respectively");
  scanf("%d", &size_of_array);
  scanf("%d", &sum_of_subarray);
  
  array = (int*) calloc(size_of_array, sizeof(int));
  
  printf("\nenter %d elements", size_of_array);
  for(i = 0; i < size_of_array; i++){
    scanf("%d", &array[i]);
  }
  
  for(i = 0; i < size_of_array; i++){
    start_index = i;
    end_index = check_presence_of_subarray(array, size_of_array, start_index, sum_of_subarray);
    if(end_index != -1){
      flag = 1;
      break;
    }
  }
  
  if(flag == 1){
    printf("\nSubarray is ");
    for(i = start_index; i <= end_index; i++){
      printf("%d ", array[i]);
    }
  }else{
    printf("\nSubarray not found");
  }
  return 0;
}
