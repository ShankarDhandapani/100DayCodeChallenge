#include <stdio.h>
#include <string.h>

int main(void) {
  char name[30], letters[5];
  int val = 0, i, j, count = 0;
  printf("Input the String");
  scanf("%s", name);
  
  for(i = 0; i < strlen(name); i++){
    if(name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u' || name[i] == 'A' || name[i] == 'E' || name[i] == 'I' || name[i] == 'O' || name[i] == 'U'){
      letters[count] = name[i];
      val +=  name[i];
      count++;
    }
  }
  printf("\nThe vowel(s) is(are) ");
  if(strlen(letters) == 1){
    printf("%c", letters[0]);
  }else{
    for(i = 0; i < strlen(letters); i++){
      printf("%c", letters[i]);
      if(i != (strlen(letters) - 1)){
        printf(", ");
      }
    }
  }
  printf("\nASCII Summation is %d", val);
  return 0;
}
