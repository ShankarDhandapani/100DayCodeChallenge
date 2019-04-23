#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int arr[6][6], i, j, sum = 0, row, column, col;
  printf("Enter the no. of rows");
  scanf("%d", &row);
  printf("\nEnter the no. of columns");
  scanf("%d", &column);
  col = column - 1;
  if(row != column){
    printf("Make sure your input matrix should be in nxn format");
    exit(0);
  }
  for(i = 0; i < row; i++){
    for(j = 0; j < column; j++){
      printf("\ninsert the element for %d,%d", i, j);
      scanf("%d", &arr[i][j]);
    }
  }
  
  printf("\nThe matrix is\n");
  for(i = 0; i < row; i++){
    for(j = 0; j < column; j++){
      printf("%d", arr[i][j]);
      if(j != (column - 1)){
        printf("\t");
      }
    }
    printf("\n");
  }
  
  printf("\nDiagonal elements are ->");
  for(i = 0; i < row; i++){
    for(j = 0; j < column; j++){
      if(i == j){
        printf("%d", arr[i][j]);
        sum += arr[i][j];
        if(j != (column - 1)){
          printf(",");
        }
      }
    }
  }
  for(i = 0; i < row; i++){
    for(j = 0; j < column; j++){
      if(j == col){
        printf("%d", arr[i][j]);
        sum += arr[i][j];
        if(j != (column - 1)){
          printf(",");
        }
        col--;
      }
    }
  }
  printf("Sum of all the elements -> %d", sum);
  return 0;
}
