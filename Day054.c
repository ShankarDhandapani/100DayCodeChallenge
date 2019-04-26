#include <stdio.h>

int main(void) {
  int i, j, row, column, mat[5][5], row_sum[5], column_sum[5];
  printf("Enter the no. of rows");
  scanf("%d", &row);
  printf("Enter the no. of columns");
  scanf("%d", &column);
  
  for(i = 0; i < row; i++){
    for(j = 0; j < column; j++){
      printf("insert the element for %d,%d", i, j);
      scanf("%d", &mat[i][j]);
    }
  }
  
  for(i = 0; i < row; i++){
    row_sum[i] = 0;
    column_sum[i] = 0;
    for(j = 0; j < column; j++){      
      row_sum[i] += mat[i][j];
      column_sum[i] += mat[j][i];
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
  
  for(i = 0; i < row; i++){
    printf("\nSum of row%d->%d", (i+1), row_sum[i]);
  }
  for(i = 0; i < row; i++){
    printf("\nSum of column%d->%d", (i+1), column_sum[i]);
  }
  return 0;
}
