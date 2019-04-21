#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int size_of_arr1, size_of_arr2, *arr1, *arr2, i, total_size = 0, *arr_merged, temp;
  
  printf("Input the number of elements to be stored in the first array");
  scanf("%d", &size_of_arr1);
  
  arr1 = (int*) calloc(size_of_arr1, sizeof(int));
  
  if(arr1 != NULL ){
    printf("\nInput %d elements in the array", size_of_arr1);
    for(i = 0; i < size_of_arr1; i++){
      scanf("%d", &arr1[i]);
    }
  }
    
    printf("\nInput the number of elements to be stored in the second array");
    scanf("%d", &size_of_arr2);
    
    if(size_of_arr1 != size_of_arr2){
      printf("\nmake sure both the arrays must be with the same size");
      exit(0);
    }
  
    arr2 = (int*) calloc(size_of_arr2, sizeof(int));
    
    if(arr2 != NULL){
    printf("\nInput %d elements in the array", size_of_arr2);
    
    for(i = 0; i < size_of_arr2; i++){
      scanf("%d", &arr2[i]);
    }
    }
    
    if(arr1 != NULL & arr2 != NULL){
    arr_merged = (int*) calloc((size_of_arr1 + size_of_arr2), sizeof(int));
    
    for(i = 0; i < size_of_arr1; i++){
      arr_merged[total_size] = arr1[i];
      total_size++;
    }
    
    for(i = 0; i < size_of_arr2; i++){
      arr_merged[total_size] = arr2[i];
      total_size++;
    }
    
    for(i = 0; i < total_size; i++){
    for(int a = i + 1; a < total_size; a++){
      if(arr_merged[i] < arr_merged[a]){
        temp = arr_merged[i];
        arr_merged[i] = arr_merged[a];
        arr_merged[a] = temp;
      }
    }
  }
    
    printf("\nThe merged array in descending order is \n");
    
    for(i = 0; i < total_size; i++){
      printf("%d", arr_merged[i]);
      if(i != (total_size - 1)){
        printf("\t");
      }
    }
    }
  
  return 0;
}
