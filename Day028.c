#include <stdio.h>
#include <stdlib.h>
void ascend();
void descend();
void s_largest();
void s_smallest();

int n, *arr, i, *temp, temp1;

int main(void) {
  //let your logic goes here
  //you should engage the stack by calling 4 user defined mentods 
  //for four different functionalities required
  printf("Enter the size of the array");
  scanf("%d", &n);
  
  arr = (int*) calloc(n, sizeof(int));
  
  if(arr != NULL){
    printf("\nInput %d integer numbers", n);
    for(i = 0; i < n; i++){
      scanf("%d", &arr[i]);
    }
    
    temp = arr;
    ascend();
    
    temp = arr;
    descend();
    
    s_largest();
    s_smallest();
    
  }
  return 0;
}
void ascend(){
  printf("\narray contents in ascending order are");
  
  for(i = 0; i < n; i++){
    for(int a = i + 1; a < n; a++){
      if(temp[i] > temp[a]){
        temp1 = temp[i];
        temp[i] = temp[a];
        temp[a] = temp1;
      }
    }
  }
  
  for(i = 0; i < n; i++){
    printf("\n%d", temp[i]);
  }
}
void descend(){
  printf("\narray contents in descending order are");
  
  for(i = 0; i < n; i++){
    for(int a = i + 1; a < n; a++){
      if(temp[i] < temp[a]){
        temp1 = temp[i];
        temp[i] = temp[a];
        temp[a] = temp1;
      }
    }
  }
  
  for(i = 0; i < n; i++){
    printf("\n%d", temp[i]);
  }
}
void s_largest(){
  printf("\nsecond largest element in a given array is\n%d", temp[1]);
}
void s_smallest(){
  printf("\nsecond smallest element in a given array is\n%d", temp[n - 2]);
}
