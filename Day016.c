#include<stdio.h>
#include<stdlib.h>

int main(void)
{	
  int date, month, year;
  printf("Input the Date");
  printf("\nDate");
  scanf("%d",&date);
  printf("\nMonth");
  scanf("%d",&month);
  printf("\nYear");
  scanf("%d",&year);
  
  if(date <= 31){
    if(month <= 12){
    printf("The entered date is %d-%d-%d", month, date, year);
    }else{
      printf("Entered month is invalid");
    }
  }else{
    printf("Entered Date is invalid");
  }
      return 0;
}
