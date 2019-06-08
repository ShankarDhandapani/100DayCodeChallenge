#include <stdio.h>

int no_of_possibilities(int score, int flag){
  int total_possibilities = 0;
  
  if(score == 0){
    return 1;
  }
  
  if(score > 1 && flag == 0){
    total_possibilities = total_possibilities + no_of_possibilities((score - 1), 0) + no_of_possibilities((score - 2), 1);
  }else{
    total_possibilities = total_possibilities + no_of_possibilities((score - 1), 0);
  }
  
  return total_possibilities;
}

int main(void) {
  int score;
  printf("Enter the score");
  scanf("%d", &score);
  printf("%d", no_of_possibilities(score, 0));
  return 0;
}
