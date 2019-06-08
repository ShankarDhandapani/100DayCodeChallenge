#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int check_automorphic_number(int number) {
  int flag = 1, square = number * number, length, square_length;
  char number_as_string[4], square_as_string[6];
  
  sprintf(number_as_string, "%d", number);
  sprintf(square_as_string, "%d", square);
  
  length = strlen(number_as_string);
  square_length = strlen(square_as_string);
  
  for(int i = length - 1, j = square_length - 1; length > 0; i--, j--){
    if(number_as_string[i] != square_as_string[j]){
      flag = 0;
      break;
    }
    length--;
  }
  
  return flag;
}

int main(void) {
  int choice, number;
  int arr[8] = {1, 5, 6, 25, 76, 376, 625};
  printf("Choose the option\n1. Check Automorphic Number\n2. Generate Automorphic Numbers between 1 & 1000\n3. Exit");
  scanf("%d", &choice);
  
  switch(choice){
    case 1: 
      printf("Enter a number");
      scanf("%d", &number);
      if(check_automorphic_number(number)){
        printf("\nthe entered number is a Automorphic Number");
      } else {
        printf("\nthe entered number is not a Automorphic Number");
      }
      break;
    case 2:
      printf("\nAutomorphic Numbers between 1 & 1000 are\n");
      for(int i = 0; i < 7; i++){
        printf("%d ", arr[i]);
      }
      break;
    case 3: exit(0); break;
  }
  return 0;
}
