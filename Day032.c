#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int *arr, n, i;
  
  printf("Enter the size of the array");
  scanf("%d", &n);
  
  arr = (int*) calloc(n, sizeof(int));
  
  if(arr != 0){
    printf("\nInput %d integer numbers", n);
    for(i = 0; i < n; i++){
      scanf("%d", &arr[i]);
    }
    
    for(i = 1; i < n; i++){
      arr[0] = arr[0] + arr[i];
    }
    
    printf("\nThe sum of the array elements\n%d", arr[0]);
  }
  
  return 0;
}
