#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int check_narcissistic_number(int number){
  char number_as_string[4];
  int flag = 0, *array, i = number, count = 0, sum = 0;
  
  sprintf(number_as_string, "%d", number);
  
  array = (int*) calloc(strlen(number_as_string), sizeof(int));

  while(i != 0){
    array[count++] = i % 10;
    i /= 10;
  }
  
  for(i = 0; i < strlen(number_as_string); i++) {
    sum += pow(array[i], strlen(number_as_string));
  }
  
  if(sum == number){
    flag = 1;
  }
  
  return flag;
}


int main(void) {
  int choice, number;
  int arr[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 153, 370, 371, 407, 1634, 8208};
  
  printf("Choose the option\n1. Check Narcissistic Number\n2. Generate first 15 Narcissistic Numbers\n3. Exit");
  scanf("%d", &choice);
  
  switch(choice) {
    case 1:
      printf("\nEnter a number");
      scanf("%d", &number);
      if(check_narcissistic_number(number) == 1){
        printf("\nthe entered number is a Narcissistic Number");
      } else {
        printf("\nthe entered number is not a Narcissistic Number");
      }
      break;
    case 2:
      printf("\nThe first 15 Narcissistic Numbers are\n");
      for(int i = 0; i < 15; i++){
        printf("%d ", arr[i]);
      }
      break;
    case 3: exit(0); break;
  }
  
  return 0;
}
