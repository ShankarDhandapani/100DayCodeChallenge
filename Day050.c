#include <stdio.h>

int main(void) {
 int row, column, i, j, mat[10][10], sum = 0;
 printf("Enter the no. of rows");
 scanf("%d", &row);
 printf("\nEnter the no. of columns");
 scanf("%d", &column);
 
 for(i = 0; i < row; i++){
   for(j = 0; j < column; j++){
     printf("\ninsert the element for %d,%d", i, j);
     scanf("%d", &mat[i][j]);
     sum += mat[i][j];
   }
 }
 printf("The matrix is");
 for(i = 0; i < row; i++){
   for(j = 0; j < column; j++){
     printf("%d", mat[i][j]);
     if(j != (column - 1)){
       printf("\t");
     }
   }
   printf("\n");
 }
 
 printf("Sum of all the elements -> %d", sum);
  return 0;
}
