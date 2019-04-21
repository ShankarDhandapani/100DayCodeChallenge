#include <stdio.h>
#include<math.h>
int main(void) {
  
  float side, surfacearea, volume;
 
    printf("Enter the length of a side \n");
    scanf("%f", &side);
    surfacearea = 6.0 * side * side;
    volume = pow(side, 3);
    printf("Surface area = %.6f and Volume = %.6f \n", surfacearea,
     volume);
  
  return 0;
}
