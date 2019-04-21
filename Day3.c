#include <stdio.h>

int main(void) {
  float num1, num2, multiplication, division;
  printf("Enter two numbers: ");
  scanf("%f %f", &num1, &num2);
  multiplication = num1 * num2;
  division = num1 / num2;
  printf("Multiplication result is %f.\nDivision result is %f", multiplication, division);
  return 0;
}
