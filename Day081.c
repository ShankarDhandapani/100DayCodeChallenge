#include <stdio.h>
#include <string.h>

int main(void) {
  char str[41], special_char[41];
  int count = 0, i, length;
  printf("Enter the input string");
  scanf("%[^\n]s", str);
  
  length = strlen(str);
  
  printf("\nThe final output is\n");
  for(i = 0; i < length; i++){
    if(((64 < str[i]) && (str[i] < 91)) || ((96 < str[i]) && (str[i] < 123)) || (str[i] == 32)){
      printf("%c", str[i]);
    }else{
      special_char[count] = str[i];
      count++;
    }
  }
  special_char[count] = '\0';
  printf("%s", special_char);
  return 0;
}
