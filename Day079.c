#include <stdio.h>
#include <stdlib.h>

int main() {
  int row, column, **arr, i, j;
  int row_count, column_count = 1;
  
  printf("Enter the no. of rows");
  scanf("%d", &row);
  printf("Enter the no. of columns");
  scanf("%d", &column);
  
  //Creating 2D array
  arr = (int**) calloc(row, sizeof(int*));
  for(i = 0; i < row; i++){
    arr[i] = (int*) calloc(column, sizeof(int));
  }
  
  //Assigning values to array
  for(i = 0; i < row; i++){
    for(j = 0; j < column; j++){
      printf("\ninsert the element for %d,%d", i, j);
      scanf("%d", &arr[i][j]);
    }
  }
  
  //Printing the original matrix
  printf("\nThe matrix is\n");
  for(i = 0; i < row; i++){
    for(j = 0; j < column; j++){
      printf("%d", arr[i][j]);
      if(j != (column - 1)){
        printf(" ");
      }
    }
    printf("\n");
  }
  
  //Printing the result
  printf("\nResult is\n");
  for(i = 0; i < row; i++){
    row_count = i;
    if(column_count > column){
      column_count = column;
    }
    for(j = 0; j < column_count; j++){
      printf("%d", arr[row_count][j]);
      if(j != (column_count - 1)){
        printf(" ");
      }
      row_count--;
    }
    column_count++;
    printf("\n");
  }
  
  column_count = column - 1;
  for(i = 1; i <= (column - 1); i++){
    row_count = row - 1;
    for(j = i; j < column; j++){
      printf("%d", arr[row_count][j]);
      if(j != (column - 1)){
        printf(" ");
      }
      row_count--;
    }
    printf("\n");
  }
  return 0;
}
