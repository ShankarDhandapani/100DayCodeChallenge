#include <stdio.h>

int main(void) {
  int row, column, mat[5][5], i, j, T = 0;
  printf("Enter the no. of rows");
  scanf("%d", &row);
  printf("\nEnter the no. of columns");
  scanf("%d", &column);
  
  for(i = 0; i < row; i++){
    for(j = 0; j < column; j++){
      printf("insert the element for %d,%d", i, j);
      scanf("%d", &mat[i][j]);
      if(mat[i][j] == 0){
        T++;
      }
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
  
  if(T >= ((row * column) / 2)){
    printf("The given matrix is a sparse matrix.");
  }else{
    printf("The given matrix is not a sparse matrix.");
  }
  
  return 0;
}
