#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int* substring(char *str1, char *str2, int len) {
  int *array, i, count = 0, start, j;
  
  array = (int*) calloc(2, sizeof(int));
  
  for(i = 0; i < len; i++){
    for(j = 0; j < len; j++){
      if(str1[i] == str2[j]){
        if(str1[i+1] == str2[j+1]){
          goto check_substring;
        }
      }
    }
  }
  
  check_substring:
    start = i;
    while(str1[i] == str2[j]){
      count++;
      i++;
      j++;
    }
    
  array[0] = start;
  array[1] = count;
  
  return array;
}

int main(void) {
  char *whole_str;
  int mid_point, *arr, i;

  printf("Enter the string");
  scanf("%s", whole_str);
  
  mid_point = (strlen(whole_str) % 2) == 0 ? (strlen(whole_str) / 2) : (strlen(whole_str) / 2) + 1;
  arr = substring(&whole_str[0], &whole_str[mid_point], mid_point);
  
  for(i = arr[0]; i < arr[1]; i++)
    printf("%c", whole_str[i]);
  
  return 0;
}
