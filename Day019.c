#include<stdio.h>


int isleap(int year){
  if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
    return 1;
  return 0;
}


int main(void){
  //please have your logic here
  //the reason why I haven't include any code here is, 
  //you need to completely revamp your yesterday's 
  //code, because of the consideration of looping
  int date, month, year, cen_op, format, century[3] = {18, 19, 20}, addDay, cont_op;
  printf("Enter the date in DD format\n");
  scanf("%d", &date);
  printf("Enter the month in MM format\n");
  scanf("%d", &month);
  printf("Enter the year in YY format\n");
  scanf("%d", &year);
  printf("Choose century\n1. 19th\n2. 20th\n3. 21st\n");
  scanf("%d", &cen_op);
  printf("Choose the format\n1. MM-DD-YYYY\n2. DD-MM-YYYY\n3. YYYY-MM-DD\n");
  scanf("%d", &format);
  if(date <= 31 && month <= 12){
    switch(cen_op){
      case 1:
        printf("The date is %d%d-%d-%d\n", century[cen_op-1], year, month, date);
        break;
      case 2:
        printf("The date is %d-%d-%d%d\n", month, date, century[cen_op-1], year);
        break;
      case 3:
        printf("The date is %d-%d-%d%d\n", date, month, century[cen_op-1], year);
        break;
    }
  }
  
  year = century[cen_op-1] * 100 + year;
  
  while(1){
    printf("How many days you want to add\n");
    scanf("%d",&addDay);
    while (addDay--){
      if (month == 12 && date == 31)
        month = 1, year++, date = 1;
      else if (date == 30 && (month == 4 || month == 6 || month == 9 || month == 11))
        date = 1, month++;
      else if (date == 31)
        date = 1, month++;
      else if (date == 29 && month == 2 && isleap(year))
        date = 1, month++;
      else if (date == 28 && month == 2 && !isleap(year))
        date = 1, month++;
      else
        date++;
    }
    printf("\nThe date is %d-%d-%d", date, month, year);
    printf("\nDo you want to continue\n1.Yes\n2.No\n");
    scanf("%d", &cont_op);
    if (cont_op == 2)
      break;
  }
  return 0;
}
