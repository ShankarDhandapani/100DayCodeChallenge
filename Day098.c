#include <stdio.h>
#include <string.h>

void swap(char *a, char *b) {
  char temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

int main(void) {
  char string[8];
  int flag = 0;
  
  printf("Enter the string");
  scanf("%s", string);
  
  for(int i = 0; i < strlen(string); i++) {
    for(int j = i + 1; j < strlen(string); j++){
      if(string[i] == string[j]){
        for(int k = j + 1; k <= strlen(string); k++) {
          if(string[j] != string[k] && string[k] != '\0') {
            flag = 0;
            swap(&string[j], &string[k]);
            break;
          } else {
            flag = 1;
          }
        }
        break;
      }
    }
  }
  if(flag == 1) {
    printf("Not possible to rearrange");
  } else {
    printf("%s", string);
  }
  return 0;
}
