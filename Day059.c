#include <stdio.h>
#include <string.h>

char str[40];

void capitalize(){
  str[0] = str[0] - 32;
  for(int i = 0; i < strlen(str); i++){
    if(str[i + 1] == 32 || str[i + 1] == 44 || str[i + 1] == '\0' || str[i - 1] == 32 || str[i - 1] == 44){
      str[i] = str[i] - 32;
    }
  }
}


int main(void) {
  printf("Enter the string");
  scanf("%[^\n]s", str);
  capitalize();
  printf("%s", str);
  return 0;
}
