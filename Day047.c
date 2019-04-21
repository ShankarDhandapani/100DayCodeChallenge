#include <stdio.h>
#include <string.h>

void sub_string(char*, char*, int, int);

int main(void) {
  char string[20], substring[10];
  printf("Enter the String");
  scanf("%[^\n]s", string);
  scanf("%s", substring);
  sub_string(string, substring, strlen(string), strlen(substring));
  return 0;
}

void sub_string(char *str, char *sub_str, int str_len, int sub_str_len){
  int i, flag = 0, count = 1;
  char *sub_str1 = sub_str;
  for(i = 0; i < str_len; i++){    
    if(*str == *sub_str){
      flag = 1;
      *sub_str = *sub_str + 1;
      *str = *str + 1;
      count++;
      if(count >= sub_str_len){
        break;
      }
    }else{
      *str = *str + 1;
      *sub_str = *sub_str1;
      count = 0;
      flag = 0;
    }
  }
  
  if(flag == 1){
    printf("the search word is found");
  }else{
    printf("the search word is not found");
  }
}
