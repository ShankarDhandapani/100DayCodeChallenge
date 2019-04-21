#include <stdio.h>

int temp, num1, num2;

void swap(){
  temp = num1;
  num1 = num2;
  num2 = temp;
}
int main(void) {
    
    
    scanf("%d %d",&num1, &num2);
    printf("before swapping values are %d %d", num1, num2);
    swap();
    printf("\nafter swapping values are %d %d", num1, num2);
  return 0;
}
