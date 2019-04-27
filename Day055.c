#include <stdio.h>
#include <stdlib.h>

void left_rotate(int *a,int n){
  int temp;
  for(int i = (n - 1); i > 0; i--){
    temp = a[i];
    a[i] = a[0];
    a[0] = temp;
  }
}

int main(void) {
  int *arr, size, i, count;
  
  printf("Enter the size of the array");
  scanf("%d", &size);
  
  arr = (int*) calloc(size, sizeof(int));
  
  printf("\nInput %d numbers", size);
  for(i = 0; i < size; i++){
    scanf("%d", &arr[i]);
  }
  
  printf("\nInput number of times to rotate");
  scanf("%d", &count);
  
  for(i = 0; i < count; i++){
    left_rotate(arr, size);
  }
  
  printf("\nArray after left rotation %d time(s)", count);
  for(i = 0; i < size; i++){
    printf("\n%d", arr[i]);
  }
  return 0;
}
