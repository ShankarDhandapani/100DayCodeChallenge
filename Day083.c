#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int sizeOfTheArray, *array, i, j, k, count = 0;
  
  printf("Enter the size of the array");
  scanf("%d", &sizeOfTheArray);
  
  array = (int*) calloc (sizeOfTheArray, sizeof(int));
  
  printf("\nInput %d elements", sizeOfTheArray);
  for(i = 0; i < sizeOfTheArray; i++){
    scanf("%d", &array[i]);
  }
  
  printf("\nEnter the value for k");
  scanf("%d", &k);
  
  for(i = 0; i < sizeOfTheArray; i++){
    for(j = (i + 1); j < sizeOfTheArray; j++){
      if((array[i] + array[j]) % k == 0){
        count++;
      }
    }
  }
  
  printf("\nResult is %d", count);
  return 0;
}
