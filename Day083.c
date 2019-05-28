#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int size_of_the_array, *array, *subsequence, i, j, ones, tens, count = 0;
  
  printf("Enter the size of the array");
  scanf("%d", &size_of_the_array);
  
  array = (int*) calloc(size_of_the_array, sizeof(int));
  subsequence = (int*) calloc((size_of_the_array * 2), sizeof(int));
  
  printf("Enter %d elements", size_of_the_array);
  for(i = 0; i < size_of_the_array; i++){
    scanf("%d", &array[i]);
  }
  
  for(i = 0; i < size_of_the_array; i++){
    ones = array[i] % 10;
    tens = array[i] / 10;
    for(j = i + 1; j < size_of_the_array; j++){
      if(((ones == array[j] % 10) || (ones == array[j] / 10)) || ((tens == array[j] % 10) || (tens == array[j] / 10))){
        subsequence[count++] = array[i];
        subsequence[count++] = array[j];
        i = j - 1; 
        break;
      }
    }
  }
  
  for(i = 0; i < count; i++){
    for(j = i + 1; j < count; j++){
      if(subsequence[i] == subsequence[j]){
        subsequence[j] = -1;
      }
    }
  }
  
  printf("\nThe longest subsequence is ");
  for(i = 0; i < count; i++){
    if(subsequence[i] != -1){
      printf("%d", subsequence[i]);
      if(i != (count - 1)){
        printf(",");
      }
    }
  }
  return 0;
}
