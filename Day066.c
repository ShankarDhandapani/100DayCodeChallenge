#include <stdio.h>
#include <string.h>

int main(void) {
  char input_string[15];
  int i, j, count = 0;
  printf("Enter the String");
  scanf("%s", input_string);
  for(i = 0; i < strlen(input_string); i++){
    count = 0;
    j = i;
    while(j < strlen(input_string)){
      if(input_string[i] < input_string[j + 1]){
        count++;
      }
      j++;
    }
    printf("%d ", count);
  }
  return 0;
}
