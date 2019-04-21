#include <stdio.h>

int number1, number2;

void getValue()
{
  printf("Enter two numbers: \n");
  scanf("%d %d",&number1, &number2);
}

int main(void) {
  int sum;
  getValue();
  sum = number1 + number2;
  printf("Sum of %d and %d is %d.",number1, number2, sum);
  return 0;
}
