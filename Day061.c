#include <stdio.h>

int main(void) {
  int input_number, i, sum = 0;
  printf("Enter the number");
  scanf("%d", &input_number);
  
  for(i = 1; i < input_number; i++){
    if(input_number%i == 0){
      sum += i;
    }
  }
  
  if(sum == input_number){
    printf("%d is a perfect number", input_number);
  }else{
    printf("%d is not a perfect number", input_number);
  }
  return 0;
}
