#include <stdio.h>
#include <stdlib.h>

int main() {
  int row, col, i, j, temp;
  
  printf("Enter the no. of rows");
  scanf("%d", &row);
  printf("Enter the no. of columns");
  scanf("%d", &col);
  
  int value = 1, max_value = (row * col), **arr, **count;
  
  // h = Horizontal iteration count, v = Vertical iteration count
  int h = col, v = row;
  
  //Right consant, Down constant, Left Constant, Right constant
  int rk = col - 1, dk = 0, lk = 0, tk = row - 1;
  
  //Total number of iterations
  int iteration_count = (col % 2) == 0 ? col / 2 : (col / 2);
  int final_iteration = (col % 2) == 0 ? col / 2 : (col / 2) + 1;
  
  //Creating an dynamic 2D array
  arr = (int **) calloc(row, sizeof(int*));
  for(i = 0; i < row; i++){
    arr[i] = (int *) calloc(col, sizeof(int));
  }
  
  //Creating an dynamic 2D array
  count = (int **) calloc(row, sizeof(int*));
  for(i = 0; i < row; i++){
    count[i] = (int *) calloc(col, sizeof(int));
  }
  
  //Assigning values to array
  for(i = 0; i < row; i++){
    for(j = 0; j < col; j++){
      printf("\ninsert the element for %d,%d", i, j);
      scanf("%d", &arr[i][j]);
    }
  }

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

  //Pattern for spiral matrix
  while(iteration_count > 0){
    
    //Down Movement
    for(i = 0; i < v; i++){
      if(count[i][dk] == 0){
        temp = arr[i][dk];
        arr[i][dk] = arr[0][0];
        arr[0][0] = temp;
        count[i][dk]++, value++;
      }
      if(value > max_value){
        break;
      }
    }
    v--;

    //Right Movement
    for(i = 0; i < h; i++){
      if(count[rk][i] == 0){
        temp = arr[rk][i];
        arr[rk][i] = arr[0][0];
        arr[0][0] = temp;
        count[rk][i]++, value++;
      }
      if(value > max_value){
        break;
      }
    }
    h--;

    //Top Movement
    for(i = row - 1; i >= 0; i--){
      if(count[i][tk] == 0){
        temp = arr[i][tk];
        arr[i][tk] = arr[0][0];
        arr[0][0] = temp;
        count[i][tk]++, value++;
      }
      if(value > max_value){
        break;
      }
    }
    
    //Left Movement
    for(i = col - 1; i >= 0; i--){
      if(count[lk][i] == 0){
        temp = arr[lk][i];
        arr[lk][i] = arr[0][0];
        arr[0][0] = temp;
        count[lk][i]++, value++;
      }
      if(value > max_value){
        break;
      }
    }
    h--;
      
    if(value > max_value){
        break;
      }
    v--;
    dk++, rk--, tk--, lk++;
  }

  for(i = 0; i < (final_iteration - 1); i++){
    temp = arr[i][i];
    arr[i][i] = arr[i + 1][i + 1];
    arr[i + 1][i + 1] = temp;
  }
  
  printf("\nAnti-clockwise Rotation output is\n");
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
