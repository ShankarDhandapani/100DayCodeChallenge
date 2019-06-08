#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
  char string[30];
  int alphabet_check[26], i, flag = 0;
  
  printf("Enter the string");
  scanf("%[^\n]s", string);
  
  for(i = 0; i < 26; i++){
    alphabet_check[i] = 0;
  }
  
  for(i = 0; i < strlen(string); i++){
    if(96 < tolower(string[i]) && tolower(string[i]) < 123) {
      alphabet_check[tolower(string[i]) - 97]++;
    }
  }
  
  for(i = 0; i < 26 && flag == 0; i++){
    if(alphabet_check[i] == 0){
      flag = 1;
      break;
    }
  }
  
  if(flag == 0){
    printf("\nThe entered string is perfect pangram.");
  } else {
    printf("\nThe pangram result is");
    for(i = 0; i < 26; i++){
      if(alphabet_check[i] == 0) {
        printf("%c", (i + 97));
      }
    }
  }
  
  return 0;
}
