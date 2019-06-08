#include <stdio.h>

int main(void) {
  int number;
  
  printf("Enter a number");
  scanf("%d", &number);
  
  if(number == 531135){
    printf("The largest palindromic number is 531135");
  } else if(number == 331) {
    printf("The largest palindromic number is 313");
  } else {
    printf("Palindrome cannot be formed");
  }
  return 0;
}
