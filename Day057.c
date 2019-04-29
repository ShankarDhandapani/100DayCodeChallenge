#include <stdio.h>

int main(void) {
  int decimal, binary[32], i = 0, j, size = 1, count = 0;
  
  printf("Enter the integer");
  scanf("%d", &decimal);
  
  printf("\nBinary equivalent of %d is ", decimal);
  
  while(decimal > 0){
    binary[i] = decimal % 2;
    decimal /= 2;
    i++;
    size++;
  }
  
  while(size <= 8){
    binary[i] = 0;
    i++;
    size++;
  }
  
  for(j = 0; j < size; j++){
    if(binary[j] == 0){
      count++;
      continue;
    }
    if(binary[j] == 1){
      break;
    }
  }
  
  
  for(j = (i - 1); j >= 0; j--){
    printf("%d",binary[j]);
  }
  
  printf("\nNumber of trailing zeros in its binary representation is %d", count);
  return 0;
}
