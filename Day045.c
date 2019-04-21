#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
  char text[30], search_str;
  int count = 0, *arr, target, i;
  printf("Enter the String");
  scanf("%[^\n]s ",text);
  printf("\nEnter the character you want to search");
  scanf(" %c", &search_str);
   
  arr = (int*) calloc(strlen(text), sizeof(int));
  
  for(i = 0; i < strlen(text); i++){
    if(search_str == text[i]){
      arr[count] = i;
      count++;
    }
  }
  
  printf("\nThe character \'%c\' found in %d index/indices ", search_str, count);
  
  for(i = 0; i < count; i++){
    printf("%d", arr[i]);
    if(i != (count - 1)){
      printf(",");
    }
  }
  
  if(count > 1){
    printf("\nWhich index you're targeting?");
    scanf("%d", &target);
  }else{
    target = arr[0];
  }
  
  printf("%d", target);
  
  return 0;
}
