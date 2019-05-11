#include <stdio.h>
#include <stdlib.h>

int check_even_or_odd(int number){
  int flag = 0;
  if(number % 2 == 0){
    flag = 1;
  }
  return flag;
}

void pattern(int *array, int size_of_the_array){
  int i, j, temp;
  for(i = 0; i < (size_of_the_array - 2); i++){
    if(check_even_or_odd(array[i]) != check_even_or_odd(array[i + 2])){
      temp = array[i + 1];
      array[i + 1] = array[i + 2];
      array[i + 2] = temp;
    }
  }
}

int main(void) {
  int *array, size_of_the_array, temp, i, j;
  
  printf("\nEnter the size of the array");
  scanf("%d", &size_of_the_array);
  
  array = (int*) calloc(size_of_the_array, sizeof(int));
  
  printf("\nInput %d elements", size_of_the_array);
  for(i = 0; i < size_of_the_array; i++){
    scanf("%d", &array[i]);
  }
  
  for(i = 0; i < size_of_the_array; i++){
    for(j = i + 1; j < size_of_the_array; j++){
      if(array[i] > array[j]){
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
      }
    }
  }
  
  if(check_even_or_odd(array[0]) == 1){
    printf("\nSmallest value is %d, so output is Even-Odd pattern\n", array[0]);
  }else{
    printf("\nSmallest value is %d, so output is Odd-Even pattern\n", array[0]);
  }
  
  pattern(array, size_of_the_array);
  
  for(i = 0; i < size_of_the_array; i++){
    printf("%d", array[i]);
    if(i != (size_of_the_array - 1)){
      printf(",");
    }
  }
  
  return 0;
}
