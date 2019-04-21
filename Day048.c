#include <stdio.h>
#include <string.h>

char reverse_string[11];

void remove_space(char *str,char *rev_str, int len){
  int i, c;
  for(i = 0; i < len; i++){
    c = *str;
    if(c != 32){
      *rev_str = *str;
      rev_str += 1;
    }
    str += 1;
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

int main(void) {
  char string[30];
  printf("Enter the String");
  scanf("%[^\n]s", string);
  remove_space(string, reverse_string, strlen(string));
  strcpy(string, reverse_string);
  reverse(string, 0, strlen(string) - 1);
  if(strcmp(string, reverse_string) == 0){
    printf("The entered string is a palindrome string");
  }else{
    printf("The entered string is not a palindrome string");
  }
  return 0;
}
