#include <stdio.h>
#include <string.h>

void RLE_encode(char process_string[20], int length_of_the_process_String){
  int i, count_of_each_char[6] = {0,0,0,0,0,0}, char_count = 0;
  char character[6];
  for(i = 0; i < length_of_the_process_String; i++){
    if(character[char_count] == '\0'){
      character[char_count] = process_string[i];
    }
    if(character[char_count] == process_string[i]){
      count_of_each_char[char_count]++;
    }
    if(character[char_count] != process_string[i]){
      char_count++;
      character[char_count] = process_string[i];
      count_of_each_char[char_count]++;
    }
  }
  
  printf("\nRLE result is ");
  for(i = 0; i <= char_count; i++){
    printf("%d%c", count_of_each_char[i], character[i]);
  }
}

int main(void) {
  char input_string[20];
  printf("Enter the input string");
  scanf("%s", input_string);
  RLE_encode(input_string, strlen(input_string));
  return 0;
}
