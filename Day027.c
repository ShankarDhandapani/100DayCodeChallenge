#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n, *ptr, i, *positive, *negative, j = 0, k = 0, temp;
  
  printf("Enter the size of the array");
  scanf("%d", &n);
  
  ptr = (int*) calloc(n, sizeof(int));
  positive = (int*) calloc(n, sizeof(int));
  negative = (int*) calloc(n, sizeof(int));
  
  if(ptr != NULL){
    printf("\nInput %d integer numbers", n);
    for(i = 0; i < n; i++){
      scanf("%d", &ptr[i]);
    }
    
    for(i = 0; i < n; i++){
      for(int a = i + 1; a < n; a++){
        if(ptr[i] > ptr[a]){
          temp = ptr[i];
          ptr[i] = ptr[a];
          ptr[a] = temp;
        }
      }
    }
    
    for(i = 0; i < n; i++){
      if(ptr[i] >= 0){
        positive[j] = ptr[i];
        ++j;
      }
      else{
        negative[k] = ptr[i];
        ++k;
      }
    }
    
    printf("\nPositive numbers are");
    for(i = 0; i < j; i++){
      printf("\n%d",positive[i]);
    }
    
    printf("\nNegative numbers are");
    for(i = 0; i < k; i++){
      printf("\n%d",negative[i]);
    }
    
  }
  
  return 0;
}
