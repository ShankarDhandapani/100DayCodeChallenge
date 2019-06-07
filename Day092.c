#include <stdio.h>
#include <string.h>

int check_vowels(char c) {
  if(c == 97 || c == 101 || c == 105 || c == 111 || c == 117) {
    return 1;
  }
  return 0;
}

int main(void) {
  char sentence[50], output_sentence[50] = "";
  int flag = 0, i, count = 0;
  
  printf("Enter the string");
  scanf("%[^\n]s", sentence);
  
  for(i = 0; i < strlen(sentence); i++){
    if(check_vowels(sentence[i]) && flag != 1){
      flag = 1;
      output_sentence[count++] = sentence[i];
    } else if(check_vowels(sentence[i]) && flag == 1) {
      continue;
    } else {
      flag = 0;
      output_sentence[count++] = sentence[i];
    }
  }
  
  printf("%s", output_sentence);
  
  return 0;
}
