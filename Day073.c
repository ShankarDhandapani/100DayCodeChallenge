#include <stdio.h>
#include <stdlib.h>

int main() {
  int row, col, i, j;
  
  printf("Enter the value for N");
  scanf("%d", &row);
  printf("Enter the value for M");
  scanf("%d", &col);
  
  int value = 1, max_value = (row * col), **arr;
  
  // h = Horizontal iteration count, v = Vertical iteration count
  int h = col, v = row;
  
  //Right consant, Down constant, Left Constant, Right constant
  int rk = 0, dk = col - 1, lk = row - 1, tk = 0;
  
  //Total number of iterations
  int iteration_count = (col % 2) == 0 ? col / 2 : (col / 2) + 1;
  
  //Creating an dynamic 2D array
  arr = (int **) calloc(row, sizeof(int*));
  for(i = 0; i < row; i++){
    arr[i] = (int *) calloc(col, sizeof(int));
  }
  
  //Pattern for spiral matrix
  while(iteration_count > 0){
    
    //Right Movement
    for(i = 0; i < h; i++){
      if(arr[rk][i] == 0){
        arr[rk][i] = value;
        value++;
      }
      if(value > max_value){
        break;
      }
    }
    h--;
    
    //Down Movement
    for(i = 0; i < v; i++){
      if(arr[i][dk] == 0){
        arr[i][dk] = value;
        value++;
      }
      if(value > max_value){
        break;
      }
    }
    v--;
    
    //Left Movement
    for(i = col - 1; i >= 0; i--){
      if(arr[lk][i] == 0){
        arr[lk][i] = value;
        value++;
      }
      if(value > max_value){
        break;
      }
    }
    h--;
    
    //Top Movement
    for(i = row - 1; i >= 0; i--){
      if(arr[i][tk] == 0){
        arr[i][tk] = value;
        value++;
      }
      if(value > max_value){
        break;
      }
    }
    if(value > max_value){
      break;
    }
    v--;
    rk++, dk--, lk--, tk++;
  }
  
  //Printing the final spiral matrix
  printf("\nThe final spiral matrix is\n");
  for(i = 0; i < row; i++){
    for(j = 0; j < col; j++){
      printf("%d\t", arr[i][j]);
    }
    printf("\n");
  }
  return 0;
}
