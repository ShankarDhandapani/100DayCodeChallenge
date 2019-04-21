#include <stdio.h>
#include <string.h>

int position(char);

char s[30];

int main(void) {
  char c;
  int i, res;
  printf("Enter the String\n");
  scanf("%s",s);
  printf("Enter the character you want to search\n");
  //write your logic here
  scanf(" %c", &c);
  res = position(c);
  printf("%d", res);
  
  return 0;
}

int position(char c){
  //write your logic here
  int flag = 0, position;
  for(int i = 0; i < strlen(s); i++){
    if(s[i] == c){
      flag = 1;
      position = i;
      break;
    }
  }
  
  if(flag == 0){
    position = -1;
  }
  
  return position;
}
