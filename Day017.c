#include <stdio.h>

int main(void)
{
  int DD, MM, YY, cen_choice, format_choice, year;
  printf("Enter the date in DD format");
  scanf("%d", &DD);
  printf("\nEnter the month in MM format");
  scanf("%d", &MM);
  printf("\nEnter the year in YY format");
  scanf("%d", &YY);
  
  if((YY / 100) == 0){
    if(DD <= 31){
      if(MM <= 12){
        printf("\n\nChoose century\n1.19th\n2.20th\n3.21st");
        scanf("%d", &cen_choice);
        
        switch(cen_choice){
          case 1: year = (18 * 100) + YY;break;
          case 2: year = (19 * 100) + YY;break;
          case 3: year = (20 * 100) + YY;break;
          default: printf("Invalid Choice");break;
        }
        
        printf("\nChoose the format\n1.MM-DD-YYYY\n2.DD-MM-YYYY\n3.YYYY-MM-DD");
        scanf("%d", &format_choice);
        
        switch(format_choice){
          case 1: printf("\nThe date is %d-%d-%d", MM, DD, year);break;
          case 2: printf("\nThe date is %d-%d-%d", DD, MM, year);break;
          case 3: printf("\nThe date is %d-%d-%d", year, MM, DD);break;
          default: printf("Invalid Choice");break;
        }
      }else{
        printf("Check the month you have entered.");
      }
    }else{
      printf("Check the date you have entered.");
    }
  }else{
    printf("Enter the Year in YY Format.");
  }
  
  
  
  return 0;
}
