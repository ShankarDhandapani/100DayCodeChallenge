#include <stdio.h>

void swap(int *x,int *y){
  int temp;
  temp = *x;
  *x = *y;
  *y = temp;
}

int main(void) {
  int number1, number2;
  printf("enter 2 numbers to swap\n");
  scanf("%d%d", &number1, &number2);
  printf("before swapping a and b are %d and %d\n", number1, number2);
  swap(&number1, &number2);
  printf("after swapping a and b are %d and %d", number1, number2);
  return 0;
}
