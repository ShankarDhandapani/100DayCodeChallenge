#include <stdio.h>
#include <string.h>

int main(void) {
  char str[30], revstr[30];
  int len;
  printf("Enter your string");
  scanf("%s", str);
  len = strlen(str);
  for(int i = len; i >= 0; i--){
    if(str[i] != '\0'){
      revstr[len - (i + 1)] = str[i];
    }
  }
  printf("Entered string is\n%s", str);
  printf("\nReversed string is\n%s", revstr);
  
  if(strcmp(str, revstr) == 0){
    printf("\nPalindrome string- Yes");
  }else{
    printf("\nPalindrome string- No");
  }
  
  return 0;
}
