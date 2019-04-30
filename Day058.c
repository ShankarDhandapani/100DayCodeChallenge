#include <stdio.h>
#include <string.h>

char reverse_string[11];

void right_rotate(char *a,int n, int count){
  char temp;
  for(int j = 0; j < count; j++){
    for(int i = 1; i < n; i++){
      temp = a[i];
      a[i] = a[0];
      a[0] = temp;
    }
  }
}

char *reverse(char *x, int begin, int end)
{
  char c;
 
 while(begin <= end){
   c = *(x+begin);
   *(x+begin) = *(x+end);
   *(x+end) = c;
   ++begin;
   --end;
 }
 
 return x;
}

int is_palindrome(char string[30], int len){
  int flag;
  strcpy(reverse_string, string);
  reverse(reverse_string, 0, strlen(reverse_string) - 1);
  if(strcmp(string, reverse_string) == 0){
    flag = 1;
  }else{
    flag = 0;
  }
  return flag;
}

int main(void) {
  char str[30];
  int i, flag = 0;
  printf("Enter the string");
  scanf("%s", str);
  for(i = 0; i < strlen(str); i++){
    if(is_palindrome(str, strlen(str)) == 1){
      right_rotate(str, strlen(str), 1);
    }else{
      flag = 1;
      break;
    }
  }
  
  if(is_palindrome(str, strlen(str)) == 1 && flag != 1){
    flag = -1;
  }
  
  if(flag == 1){
    printf("%s", str);
  }else{
    printf("%d", flag);
  }
  
  return 0;
}
