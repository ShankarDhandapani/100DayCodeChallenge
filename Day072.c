#include <stdio.h>

int isLeapYear(int year){
  int flag;
  
  if(((year % 4 == 0) && (year % 100!= 0)) || (year%400 == 0)){
    flag = 1;
  }else{
    flag = 0;
  }
  
  return flag;
}

int main(void) {
  int date, month, year, no_of_day_in_week, days_in_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  char weekday[7][10] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
  
  printf("Enter the date");
  scanf("%d-%d-%d", &date, &month, &year);
  
  if(isLeapYear(year) == 1){
    days_in_month[1] = 29;
  }
  
  if(date <= days_in_month[month-1]){
    no_of_day_in_week  = (date+=month<3?year--:year-2,23*month/9+date+4+year/4-year/100+year/400)%7;
    
    printf("\n%s-", weekday[no_of_day_in_week]);
    if(no_of_day_in_week == 0 || no_of_day_in_week == 6){
      printf("Weekend");
    }else{
      printf("Weekday");
    }
  }else{
    printf("\nEntered date is invalid");
  }
  
  return 0;
}
