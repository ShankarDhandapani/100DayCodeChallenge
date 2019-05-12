#include <stdio.h>

int main(void) {
  int size_of_the_array, array[8], sum_of_triangle[8][8], i, j, column_count;
  
  printf("Enter the size of the array");
  scanf("%d", &size_of_the_array);
  
  column_count = size_of_the_array;
  
  printf("\nEnter %d elements", size_of_the_array);
  for(i = 0; i < size_of_the_array; i++){
    scanf("%d", &array[i]);
  }
  
  for(i = 0; i < size_of_the_array; i++){
    for(j = 0; j < column_count; j++){
      if(i == 0){
        sum_of_triangle[i][j] = array[j];
      }else{
        sum_of_triangle[i][j] = sum_of_triangle[i - 1][j] + sum_of_triangle[i - 1][j + 1];
      }
    }
    column_count--;
  }
  
  column_count = 1;
  printf("\nSum Triangle is\n");
  for(i = (size_of_the_array - 1); i >= 0; i--){
    for(j = 0; j < column_count; j++){
      printf("%d", sum_of_triangle[i][j]);
      if(j != (column_count - 1)){
        printf(" ");
      }
    }
    column_count++;
    printf("\n");
  }
  return 0;
}
