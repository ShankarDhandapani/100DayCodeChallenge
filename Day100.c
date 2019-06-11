#include <stdio.h>
#include <string.h>

int main(void) {
  char string[15];
  int flag = 0;
  
  printf("Enter the string");
  scanf("%s", string);
  
  for(int i = 0; i < strlen(string); i++){
    for(int j = i + 1; j < strlen(string); j++){
      if(string[i] == string[j]){
        flag = 1;
      }
    }
  }
  
  if(flag == 0){
    printf("%s is an isogram", string);
  } else {
    printf("%s is not an isogram", string);
  }
  return 0;
}
