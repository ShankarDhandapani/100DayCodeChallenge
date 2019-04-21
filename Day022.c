#include <stdio.h>
long int find_fact(int);
int main(void) {
  //get the input from the user and pass the same to find_fact()
  int number;
  printf("Enter a number");
  scanf("%d", &number);
  printf("Factorial of %d is %ld", number, find_fact(number));
  return 0;
}
long int find_fact(int n){
  //find_fact() should call itself for backward traversal
  if(n >= 1){
    return n*find_fact(n - 1);
  }
  else{
    return 1;
  }
}
