#include <stdio.h>

int main(void) {
  int limit = 1;
  for (int i = 1; i <= 5; i++){
    for(int j = 1; j <= limit; j++){
      printf("*");
    }
    limit = limit + 2;
    printf("\n");
  }
 
  return 0;
}
