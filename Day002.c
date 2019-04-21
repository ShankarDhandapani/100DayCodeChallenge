#include <stdio.h>

int main(void) {
  
  float radius = 0;
  float pi = 3.14, area = 0, circumference = 0;
  printf("Enter the Radius :");
  scanf("%f",&radius);
  area = pi * radius * radius;
  printf("area is %f.", area);
  circumference = 2 * pi * radius;  
  printf("\ncircumference is %f.", circumference);
  return 0;
}
