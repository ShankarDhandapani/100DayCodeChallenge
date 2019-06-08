#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int row, col, **arr, i, j;
  
  printf("Enter the no. of rows");
  scanf("%d", &row);
  printf("Enter the no. of columns");
  scanf("%d", &col);
  
  // h = Horizontal iteration count, v = Vertical iteration count
  int h = col, v = row;
  
  //Right consant, Down constant, Left Constant, Right constant
  int rk = 0, dk = col - 1, lk = row - 1, tk = 0;
  
  arr = (int**) calloc(row, sizeof(int*));
  for(i = 0; i < row; i++){
    arr[i] = (int*) calloc(col, sizeof(int));
  }
  
  for(i = 0; i < row; i++){
    for(j = 0; j < col; j++){
      printf("\ninsert the element for %d,%d", i, j);
      scanf("%d", &arr[i][j]);
    }
  }
  
  //Printing the matrix
  printf("\nThe matrix is\n");
  for(i = 0; i < row; i++){
    for(j = 0; j < col; j++){
      printf("%d", arr[i][j]);
      if(j != (col - 1)){
        printf("\t");
      }
    }
    printf("\n");
  }
  
  //Right Movement
  for(i = 0; i < h; i++){
    if(arr[rk][i] != 0){
      arr[rk][i] = 0;
    }
  }
  h--;
    
  //Down Movement
  for(i = 0; i < v; i++){
    if(arr[i][dk] != 0){
      arr[i][dk] = 0;
    }
  }
  v--;
  
  //Left Movement
  for(i = col - 1; i >= 0; i--){
    if(arr[lk][i] != 0){
      arr[lk][i] = 0;
    }
  }
  h--;
  
  //Top Movement
  for(i = row - 1; i >= 0; i--){
    if(arr[i][tk] != 0){
      arr[i][tk] = 0;
    }
  }
  v--;
  
  //Printing the Result matrix
  printf("\nResult is\n");
  for(i = 0; i < row; i++){
    for(j = 0; j < col; j++){
      printf("%d", arr[i][j]);
      if(j != (col - 1)){
        printf("\t");
      }
    }
    printf("\n");
  }
  return 0;
}
