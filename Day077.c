#include <stdio.h>
#include <stdlib.h>

int is_prime(int n){
  int i, flag = 0;
  
  for(i = 2; i <= n/2; ++i){
    if(n % i == 0){
      flag = 1;
      break;
    }
  }
  
  return flag;
}

int* get_values(int n){
  int *arr = (int*) calloc(2, sizeof(int));;
  int count = 2, element_count = 0;
  int low = (n / 10) * 10, range = 10;
  int high = low + range;
  
  for(int i = 0; element_count != 2; i++){
    for(int j = 0; low < high && count > 0; j++){
      if (is_prime(low) == 0){
        count--;
        arr[element_count] = low;
        element_count++;
      }
      ++low;
    }
    
    if(count != 0){
      count = 2;
      low -= 10;
      high += 10;
      element_count = 0;
    }
  }
  
  return arr;
}

int main() {
  
  int number, *arr, result;
  
  printf("Enter the value for N");
  scanf("%d", &number);
  
  if(is_prime(number) == 0){
    result = 0;
  }else{
    arr = get_values(number);
    result = (number - arr[0]) < (arr[1] - number) ? (number - arr[0]) : (arr[1] - number);
  }
  
  printf("\nResult is %d", result);  
  return 0;
}
