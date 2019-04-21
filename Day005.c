#include <stdio.h>
#include <math.h>
int main(void) {
  int num1, num2, num3, perimeter, area;
  printf("Enter the values of a, b and c");
  scanf("%d %d %d", &num1, &num2, &num3);
  perimeter = (num1 + num2 + num3)/2;
  area = sqrt(perimeter * (perimeter - num1) * (perimeter - num2) * (perimeter - num3));
  printf("Area of a Triangle = %d", area);
  return 0;
}
