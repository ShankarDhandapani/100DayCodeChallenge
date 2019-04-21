#include <stdio.h>

int main(void) {
  
  int i, n, j, count = 1, count_line = 0, k, space_count;
  
  scanf("%d", &n);
  space_count = (n * 4) - 2;
  
  for(i = 0; i < n; i++){
    for(j = 1; j <= count; j++){
      printf("*");
      if(j < count){
        printf(" ");
      }
    }
    for(k = 0; k < space_count ; k++){
      printf(" ");
    }
    for(j = 1; j <= count; j++){
      printf("*");
      if(j < count){
        printf(" ");
      }
    }
    count++;
    space_count -= 4;
    if(space_count < 0){
      space_count = 0;
    }
    printf("\n");
  }
  space_count = 2;
  for(i = 0; i < n; i++){
    for(j = (count - 1); j >= 1; j--){
      printf("*");
      if(j != 1){
        printf(" ");
      }
    }
    for(k = 0; k < space_count ; k++){
      printf(" ");
    }
    for(j = (count - 1); j >= 1; j--){
      printf("*");
      if(j != 1){
        printf(" ");
      }
    }
    count--;
    space_count += 4;
    printf("\n");
  }
  return 0;
}
