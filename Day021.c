#include <stdio.h>

int main(void) {
  int limit = 1, count = 1;
  for(int i = 1; i <= 3; i++){
    for(int j = 1; j <= limit; j++){
      printf("%d", count++);
    } 
    limit += 2;
    printf("\n");
  } 
  return 0;
}
