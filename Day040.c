#include <stdio.h>

int main(void) {
  int n, i, j, count, space, k;
  
  scanf("%d", &n);
  count = n;
  space = 2;
  
  for(i = 0; i < n; i++){
    for(j = count; j > 0; j--){
      printf("*");
      if(j != 1){
        printf(" ");
      }
    }
    for(k = 0; k < space; k++){
      printf(" ");
    }
    for(j = count; j > 0; j--){
      printf("*");
      if(j != 1){
        printf(" ");
      }
    }
    count--;
    space += 4;
    printf("\n");
  }
  count = 1;
  space = (n * 4) - 2;
  
  for(i = 0; i < n; i++){
    for(j = 0; j < count; j++){
      printf("*");
      if(j != (count - 1)){
        printf(" ");
      }
    }
    for(k = 0; k < space; k++){
      printf(" ");
    }
    for(j = 0; j < count; j++){
      printf("*");
      if(j != (count - 1)){
        printf(" ");
      }
    }
    count++;
    space -= 4;
    printf("\n");
  }
  return 0;
}
