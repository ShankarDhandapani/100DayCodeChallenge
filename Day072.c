#include <stdio.h>

int main(void) {
  int length, i, j, count = 1;
  scanf("%d", &length);
  
  for(i = 0; i < length; i++){
    for(j = 0; j < count; j++){
      if((j % 2) == 0){
        printf("0");
      }else{
        printf("1");
      }
    }
    
    for(j = 0; j < (2*length - 2*count); j++){
      printf(" ");
    }
    
    for(j = 0; j < count; j++){
      if((j % 2) == 0){
        printf("0");
      }else{
        printf("1");
      }
    }
  printf("\n");
  count++;
  }
  return 0;
}
