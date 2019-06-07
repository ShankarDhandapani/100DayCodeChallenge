#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void left_rotate(int *a,int n, int count){
  int temp;
  for(int j = 0; j < count; j++){
    for(int i = (n - 1); i > 0; i--){
      temp = a[i];
      a[i] = a[0];
      a[0] = temp;
    }
  }
}

void print_array(int *a, int n){
  for(int i = n - 1; i >= 0; i--){
    printf("%d", a[i]);
  }
  printf("\n");
}

int main(void) {
  int number, *array, i, count = 0;
  char number_as_string[10];
  
  printf("Enter a number");
  scanf("%d", &number);
  
  sprintf(number_as_string, "%d", number);
  
  array = (int*) calloc(strlen(number_as_string), sizeof(int));
  
  i = number;
  while(i != 0){
    array[count++] = i % 10;
    i /= 10;
  }
  
  i = 0;
  printf("\nPossible cyclic permutations are\n");
  do{
    print_array(array, count);
    left_rotate(array, count, 1);
    i++;
  }while(i < count);
  return 0;
}
