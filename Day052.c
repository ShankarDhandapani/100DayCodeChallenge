#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i, j, row, column, mat[5][5], temp[3], col;
  printf("Enter the no. of rows");
  scanf("%d", &row);
  printf("\nEnter the no. of columns");
  scanf("%d", &column);
  col = column - 1;
  if(row != column){
    printf("Make sure your input matrix should be in %dx%d format", column, column);
    exit(0);
  }
  for(i = 0; i < row; i++){
    for(j = 0; j < column; j++){
      printf("insert the element for %d,%d", i, j);
      scanf("%d", &mat[i][j]);
    }
  }
  
  printf("\nThe matrix is\n");
  for(i = 0; i < row; i++){
    for(j = 0; j < column; j++){
      printf("%d", mat[i][j]);
      if(j != (column - 1)){
        printf("\t");
      }
    }
    printf("\n");
  }
  printf("\nMain Diagonal elements are ->");
  for(i = 0; i < row; i++){
    for(j = 0; j < column; j++){
      if(i == j){
        printf("%d", mat[i][j]);
        if(j != (column - 1)){
          printf(",");
        }
      }
    }
  }
  printf("\nSecondary Diagonal elements are ->");
  for(i = 0; i < row; i++){
    for(j = 0; j < column; j++){
      if(j == col){
        temp[i] = mat[i][j];
        printf("%d", mat[i][j]);
        if(j != (column - 1)){
          printf(",");
        }
        col--;
      }
    }
  }
  
  for(i = 0; i < row; i++){
    for(j = 0; j < column; j++){
     if(i == j){
       mat[i][j] = temp[i];
     }
    }
  }
  
  printf("\nAfter interchange, the final matrix is\n");
  for(i = 0; i < row; i++){
    for(j = 0; j < column; j++){
      printf("%d", mat[i][j]);
      if(j != (column - 1)){
        printf("\t");
      }
    }
    printf("\n");
  }
  return 0;
}
