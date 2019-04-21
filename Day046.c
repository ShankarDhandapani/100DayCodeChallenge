#include <stdio.h>
#include <string.h>

void string_processing(char*);
char output[50];
int main(void) {
  char text[50];
  printf("Enter the String");
  scanf("%[^\n]s ",text);
  string_processing(text);
  return 0;
}

void string_processing(char *text){
  int i, val;
  char *output_str = "";
  output_str = output;
  while(*text){
    val = *text;
    if(val == 32 || (64 < val && val < 91) || (96 < val && val < 123) || (47 < val && val < 58)){
      *output_str = *text;
      output_str++;
    }
    if(val == 44){
      *output_str = ' ';
      output_str++;
    }
    text++;
  }

  /*for(i = 0; i < strlen(text); i++){
    val = text[i];
    if(val == 32 || (64 < val && val < 91) || (96 < val && val < 123)){
      output_str += text[i];
    }
  }*/
  
  printf("%s", output);
}
