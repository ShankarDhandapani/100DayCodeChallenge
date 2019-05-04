#include <stdio.h>

int fact(int limit){
  int fact, i, reminder = 1, sum = 0;
  
  while(limit > 0)
  {
    fact = 1;
    reminder = limit % 10;
    limit = limit / 10;
    for(i = 1; i <= reminder; i++){
      fact *= i;
    }
    sum += fact;
  }
  
  return sum;
}

int main(void) {
  int limit, i, arr[5], count = 0;
  printf("Enter the limit");
  scanf("%d", &limit);
  
  for(i = 1; i <= limit; i++){
    if(fact(i) == i){
      arr[count] = i;
      count++;
    }
  }
  
  for(i = 0; i < count; i++){
    printf("%d", arr[i]);
    if(i != (count - 1)){
      printf(",");
    }
  }
  printf(" are Strong numbers between 1 & %d", limit);
  return 0;
}
