#include <stdio.h>

int main(void) {
  int number, i, ones, prime_digits[4] = {2, 3, 5, 7}, flag = 2, j;
  
  printf("Enter a number");
  scanf("%d", &number);
  
  while(number >= 0 && flag != 0){
    i = number;
    flag = 0;
    while(i != 0 && flag != 1){
      ones = i % 10;
      i = i / 10;
      for(j = 0; j < 4; j++){
        if(ones != prime_digits[j]){
          flag = 1;
        } else {
          flag = 0;
          break;
        }
      }
    }
    number--;
  }
  
  printf("\nResult is %d", ++number);
  return 0;
}
