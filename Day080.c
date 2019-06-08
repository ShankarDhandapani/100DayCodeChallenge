#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int size_of_array, *arr, i, j, temp1, *temp;
  
  printf("Enter the size of the array");
  scanf("%d", &size_of_array);
  
  arr = (int*) calloc(size_of_array, sizeof(int));
  temp = (int*) calloc(size_of_array, sizeof(int));
  
  printf("\nEnter %d integer elements", size_of_array);
  for(i = 0; i < size_of_array; i++){
    scanf("%d", &arr[i]);
    temp[i] = arr[i];
  }
  
  for(i = 0; i < size_of_array; i++){
    for(j = i + 1; j < size_of_array; j++){
      if(arr[i] > arr[j]){
        temp1 = arr[i];
        arr[i] = arr[j];
        arr[j] = temp1;
      }
    }
  }
  
  printf("\nFinal output is\n");
  for(i = 0; i < size_of_array; i++){
    for(j = 0; j < size_of_array; j++){
      if(temp[i] == arr[j]){
        printf("%d\t", (j == 0 ? -1 : (temp[i] != arr[j - 1] ? arr[j - 1] : arr[j - 2])));
        temp[i] = 0;
      }
    }
  }
  return 0;
}
