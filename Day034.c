#include <stdio.h>
#include <stdlib.h>

int is_prime_or_not(int n){
  int i, flag = 1;
  
  if(n == 1){
    flag = 0;
  }else{
    for(i = 2; i <= n / 2; i++){
      if(n % i == 0){
        flag = 0;
        break;
      }
    }
  }
  
  return flag;
}

int main(void) {
  int n, *arr, i, *odd, *even, odd_size = 0, even_size = 0;
  
  printf("Enter the size of the array");
  scanf("%d", &n);
  
  arr = (int*) calloc(n, sizeof(int));
  odd = (int*) calloc(n, sizeof(int));
  even = (int*) calloc(n, sizeof(int));
  
  if(arr != NULL && odd != NULL && even != NULL){
    printf("\nInput %d integer numbers", n);
    
    for(i = 0; i < n; i++){
      scanf("%d", &arr[i]);
    }
    
    for(i = 0; i < n; i++){
      if(i % 2 == 0){
        if(is_prime_or_not(arr[i]) == 1){
          even[even_size] = arr[i];
          even_size++;
        }
      }else{
        if(is_prime_or_not(arr[i]) == 1){
          odd[odd_size] = arr[i];
          odd_size++;
        }
      }
    }
    
    if(odd_size == 0){
      printf("\nNo odd positioned prime numbers");
    }else{
      printf("\nOdd positioned prime numbers are\n%d", odd[0]);
      for(i = 1; i < odd_size; i++){
        printf("\n%d", odd[i]);
        odd[0] += odd[i];
      }
      printf("\nSummation is %d", odd[0]);
    }
    
    if(even_size == 0){
      printf("\nNo even positioned prime numbers");
    }else{
      printf("\nEven positioned prime numbers are\n%d", even[0]);
      for(i = 1; i < even_size; i++){
        printf("\n%d", even[i]);
        even[0] += even[i];
      }
      printf("\nSummation is %d", even[0]);
    }
  }
  
  return 0;
}
