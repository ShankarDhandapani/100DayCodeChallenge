#include <stdio.h>

int main(void) {
  for(int i = 0; i < 5; i++){
    for(int j = 0; j < 5; j++){
      if(i == 2 && i == j){
        printf("0");
      }else{
        printf("#");
      }
      if(j != 4){
        printf(" ");
      }
    }
    printf("\n");
  }
  return 0;
}
