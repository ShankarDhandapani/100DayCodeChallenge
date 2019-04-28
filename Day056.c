#include <stdio.h>
#include <stdlib.h>

void left_rotate(int *a,int n, int count){
  int temp;
  for(int j = 0; j < count; j++){
    for(int i = (n - 1); i > 0; i--){
      temp = a[i];
      a[i] = a[0];
      a[0] = temp;
    }
  }
}

void right_rotate(int *a,int n, int count){
  int temp;
  for(int j = 0; j < count; j++){
    for(int i = 1; i < n; i++){
      temp = a[i];
      a[i] = a[0];
      a[0] = temp;
    }
  }
}

int main(void) {
  int *arr, size, i, count, choice;
  char *str;
  
  printf("Enter the size of the array");
  scanf("%d", &size);
  
  arr = (int*) calloc(size, sizeof(int));
  
  printf("\nInput %d numbers", size);
  for(i = 0; i < size; i++){
    scanf("%d", &arr[i]);
  }
  
  printf("\nWant to perform left rotate or right rotate?\n1.Left rotate\n2.Right rotate");
  scanf("%d", &choice);
  printf("\nInput number of times to rotate");
  scanf("%d", &count);
  switch(choice){
    case 1:left_rotate(arr, size, count);
           str = "left";
           break;
    case 2:right_rotate(arr, size, count);
           str = "right";
           break;
  }
  
  printf("\nArray after %s rotation %d time(s)", str, count);
  for(i = 0; i < size; i++){
    printf("\n%d", arr[i]);
  }
  
  return 0;
}
