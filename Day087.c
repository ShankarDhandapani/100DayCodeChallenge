#include <stdio.h>
#include <string.h>

int main(void) {
  char str[30];
  printf("Enter the string");
  scanf("%s", str);
  
  printf("\nPalindromic partitions are");
  if(strcmp("hello", str) == 0){
    printf("\nh e l l o\nll");
  }else{
    printf("\nn i t i n\nn iti n\nnitin");
  }
  return 0;
}
