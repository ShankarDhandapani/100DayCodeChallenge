#include <stdio.h>
int main(void)
{
  char character;
  printf("Enter any character :");
  scanf("%c",&character);
  if(character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u' || character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U'){
    printf("%c is a VOWEL",character);
  }else{
    printf("%c is a CONSONANT",character);
  }

return 0;
}
