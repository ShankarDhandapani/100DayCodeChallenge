#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int check_prime_or_not(int n) {
  int flag = 0;
  for(int i = 2; i <= n/2; ++i) {
    if(n%i == 0) {
      flag = 1;
      break;
    }
  }
  return flag;
}

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

int array_as_number(int *a, int n){
  int multiplier = 1, number = 0;
  for(int i = n - 1; i >= 0; i--){
    number += a[i] * multiplier;
    multiplier *= 10;
  }
  return number;
}

int check_circular_prime(int number){
  char number_as_string[4];
  int flag = 0, *array, i = number, count = 0;
  
  sprintf(number_as_string, "%d", number);
  
  array = (int*) calloc(strlen(number_as_string), sizeof(int));

  while(i != 0){
    array[count++] = i % 10;
    i /= 10;
  }
  
  for(i = 0; i < strlen(number_as_string) && flag != 1; i++) {
    left_rotate(array, strlen(number_as_string), 1);
    if(check_prime_or_not(array_as_number(array, strlen(number_as_string))) != 0) {
      flag = 1;
    }
  }
  
  return flag;
}

int main(void) {
  int choice, number;
  int arr[25] = {2, 3, 5, 7, 11, 13, 17, 31, 37, 71, 73, 79, 97, 113, 131, 197, 199, 311, 337, 373, 719, 733, 919, 971, 991};
  
  printf("Choose the option\n1. Check Circular Prime\n2. Generate Circular Prime numbers between 1 & 1000\n3. Exit");
  scanf("%d", &choice);
  
  switch(choice) {
    case 1: 
      printf("\nEnter a number");
      scanf("%d", &number);
      if(check_circular_prime(number) == 0) {
        printf("\nthe entered number is a circular prime number");
      } else {
        printf("\nthe entered number is a not circular prime number");
      }
      break;
    case 2:
      printf("\nThe circular prime numbers between 1 & 1000 are\n");
      for(int i = 0; i < 25; i++){
        printf("%d ", arr[i]);
      }
      break;
    case 3: exit(0); break;
  }
  return 0;
}
