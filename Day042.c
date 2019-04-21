#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
  char str[30];
  int val, i, val1, temp, a, flag = 0, *arr, flag1 = 0;
  printf("Input the string");
  scanf("%s", str);
  
  arr = (int*) calloc(strlen(str), sizeof(int));
  
  for(i = 0; i < strlen(str); i++){
    arr[i] = 1;
    for(a = i + 1; a < strlen(str); a++){
      val = str[i];
      val1 = str[a];
      if(val > val1){
        temp = val;
        val = val1;
        val1 = temp;
      }
      str[i] = val;
      str[a] = val1;
    }
  }
  
  printf("\nThe string ");
  for(i = 0; i < strlen(str); i++){
    printf("'%c'", str[i]);
    if(i != (strlen(str) - 1)){
      printf(",");
    }
  }
  
  for(i = 0; i < strlen(str); i++){
    for(int a = i + 1; a < strlen(str); a++){
      val = str[i];
      val1 = str[a];
      if((val1 - val) == 1){
        flag = 1;
      }
      if((val1 - val) == 0){
        i = strlen(str);
      }
    }
  }
  
  if(flag == 1){
    printf(" which are consecutive letters");
  }else{
    printf(" which are not consecutive letters");
  }
  
  flag = 0;
  
  for(i = 0; i < strlen(str); i++){
    val = str[i];
    for(a = i + 1; a < strlen(str); a++){
      val1 = str[a];
      if(val == val1 && arr[a] != 0){
        arr[i]++;
        arr[a]--;
        flag = 1;
      }
    }
  }
  
  if(flag == 1){
    for(i = 0; i < strlen(str); i++){
      if(arr[i] > 1){
        printf("letter \'%c\' occurs %d time(s)", str[i], arr[i]);
      }
    }
  }else{
    printf("All the letters occurs exactly once");
  }
  
  return 0;
}
